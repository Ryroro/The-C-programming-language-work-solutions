/*
 * =====================================================================================
 *
 *       Filename:  practice5-6.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/30 22时37分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int getlines_1(char s[], int lim)
{
	int c, i;
	
	for ( i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i) 
		s[i] = c;
	if ( c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int getlines_2(char *s, int lim)
{
	int c, i;
	char *s1 = s;
	while ( s1 - s < lim && (c =getchar()) != EOF && c != '\n'){
		*s1 = c;
		s1++;
	}
	if ( c == '\n') {
		*s1 = '\n';
		s1++;
	}
	*s1 = '\0';
	return s1-s;
	
}

void copy_1(char to[], char from[])
{
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
} 

int strlen_1(char s[])
{
	int i;

	i = 0;
	while (s[i] !='\0')
		++i;
	return i;
	
}

int atoi_1(char s[])
{
	int i, n;
	
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] -'0');
	return n;
}

