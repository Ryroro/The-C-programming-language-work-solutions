/*
 * =====================================================================================
 *
 *       Filename:  practice5-5.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/29 09时02分28秒
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
char *strncpy_2(char *s, char *t, int n);

main()
{
	int c,n;
	int i = 0;
	char s[MAXLINE];
	char t[MAXLINE];
	char *s_2;
	printf("Type in the first line: \n");
	while ((c = getchar()) != '\n') {
		t[i] = c;
		i++;
	}
	printf("\nType in the number of characters you want to copy: \n");
	n = getchar();
	s_2 = strncpy_2(s, t, n);
	printf("\nThis is the characters you have included:\n");
	while ( *s_2 != '\0') {
		putchar(*s_2);
		s_2++;
	}
	putchar('\n');
		
}
char *strncpy_2(char *s, char *t,int n)
{
	char *t_2 = t;
	char *s_2 = s;
	while (( t_2 - t) < n) {
		if ( *t_2 == '\0') {
			*s_2 = '\0';
			t_2++;
			s_2++;
		}
		else if (*t_2 != '\0') {
			*s_2 = *t_2;
			t_2++;
			s_2++;
		}
	}
	return (s_2 - n);
}

