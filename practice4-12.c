/*
 * =====================================================================================
 *
 *       Filename:  practice4-12.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/25 19时12分14秒
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
void itoa(char s[], int n, int j);
main()
{
	char s[MAXLINE];
	int c;
	int i = 0;
	c = 23235145;
	itoa(s, c, i);
	printf("This is the number in the program: %s\n", s); 
	for (int k = 0; s[k] != '\0'; k++)
	{
		printf("The char is %d\n", s[k]);
	}
} 
	

void itoa(char s[],int n, int i)
{
	int n_2;
	int j = 0;
	n_2 = n;
	int power = 1;
	
	if (n_2 < 10){
		s[i] = n_2+ '0';
		printf("The number now is %d\n", n_2);
		printf("The number in the stack is %d\n", s[i]);
	}
	else if (n_2 == 10) {
		s[i] = 0+'0';
		printf("The number now is %d\n", n_2);
		printf("The number in the stack is %d\n", s[i]);
	}
	else if (n_2 > 10) {
		while(n_2 > 10) {
			n_2 = n_2 / 10;
			power *= 10;
		}
		printf("The number now is %d\n", n_2);
		s[i] = n_2+ '0';
		printf("The number in the stack is %d\n", s[i]);
		itoa(s, n - n_2*power , i+1);
	}	
}
