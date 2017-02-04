/*
 * =====================================================================================
 *
 *       Filename:  practice1-20.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/31 09时07分58秒
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
#define TAB 4
int getlines(char s[], int lim);
void detab(char to[], char from[]);

main()
{
	char s[MAXLINE];
	char t[MAXLINE];
	printf("Type your original line: \n");
	getlines(s, MAXLINE);
	detab(t, s);
	printf("\nThis is your original line: \n%s", s);
	printf("\nThis is your new line: \n%s", t);
	
}

int getlines(char s[], int lim)
{
	int c, i;
	
	for (i = 0; i < lim -1 && ((c = getchar()) != EOF) && c != '\n'; i++)
		s[i] = c;
	
	if (c == '\n') {
		s[i] = '\n';
		i++;
	}
	s[i] = '\0';
	return i;
}

void detab(char to[], char from[])
{
	int i,j, power;
	power = 1;
	i = 0;
	j = 0;
	while (from[i] != '\0') {
		if (from[i] == '\t') {
			for (; j - i < TAB *power; j++)
				to[j] = ' ';
			power++;
			i++;
		} else {
			to[j] = from[i];
			j++;
			i++;
		}
			
	}
}
