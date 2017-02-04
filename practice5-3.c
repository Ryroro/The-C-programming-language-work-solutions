/*
 * =====================================================================================
 *
 *       Filename:  practice5-3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/27 11时59分08秒
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
void strcat_1(char s[], char t[]);
void strcat_2(char *s, char *t);

main()
{
	int c;
	int i = 0;
	char s[MAXLINE];
	char s_2[MAXLINE];
	char t[MAXLINE];
	
	printf("Type in the first line: \n ");
	while ((c = getchar()) != '\n') {
		s[i] = c;
		s_2[i] = c;
		i++;
	}
	
	i = 0;
	printf("\nType in the second line: \n");
	while ((c = getchar()) != '\n') {
		t[i] = c;
		i++;
	}
	strcat_1 (s,t);
	strcat_2(s_2, t);
	printf("\nThis is the result of the first function: %s\n", s);
	printf ("\nThis is the result of the second function : %s\n", s_2);
		

}


void strcat_1(char s[], char t[])
{
	int i, j;
	
	i = j = 0;
	while(s[i] != '\0')
		i++;
	while((s[i++] = t[j++]) != '\0')
		;
}


void strcat_2(char *s, char *t)
{
	while(*s != '\0')
		s++;
	while((*s++ = *t++) != '\0')
		;
}
