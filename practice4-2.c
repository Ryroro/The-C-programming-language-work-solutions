/*
 * =====================================================================================
 *
 *       Filename:  practice4-2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/23 20时59分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000
double atof(char s[]);

main()
{
	int c, i;
	char s[MAXLINE];
	double n;

	i = 0;
	printf("Enter a number please: ");
	while((c = getchar()) != '\n')
	{
		s[i] = c;
		i++;
}
	n = atof(s);
	printf("\nThe number you have entered is %.5f.\n", n);	
}

double atof(char s[])
{
	double val, power;
	int i, sign;
	
	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++){
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (s[i] == 'e' || s[i] == 'E') {
		i++;
		if (s[i] == '-') {
			i++;
			for (int j = 0; j < (s[i] - '0' + 1); j++)
				 power = power * 10;
		}
		else if (s[i] == '+') {
			i++;
			for ( int j = 0; j < (s[i] - '0' + 1); j++)
				power = power / 10;
		}
		else if (issdigit(s[i])){
			for ( int j = 0; i < (s[i] - '0' + 1); j++)
				power = power / 10;
		}
}
			
	
	return sign * val /power;
}
