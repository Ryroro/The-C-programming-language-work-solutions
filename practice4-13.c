/*
 * =====================================================================================
 *
 *       Filename:  practice4-13.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/24 22时39分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define MAXLINE 1000
void reverse(char s[], int n, int j);
main()
{
	int c;
	int i = 0;
	int j = 0;
	char s[MAXLINE];
	while ((c = getchar()) != EOF){
		s[i] = c;
		i++;
	}
	reverse(s, i, j);
	printf("The reversed line: %s.\n", s);

	
}


void reverse(char s[], int n, int j)
{
	int temp;
	temp = s[j];
	s[j] = s[n-1-j];
	s[n-1-j] = temp;
	if ((j < n-1-j) || ( j == (n-1)/2))
		reverse(s,n, j+1);
}

