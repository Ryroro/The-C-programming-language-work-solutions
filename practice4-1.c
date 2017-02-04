/*
 * =====================================================================================
 *
 *       Filename:  practice4-1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/21 08时21分50秒
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
int getlines(char line[], int max);
int strindex(char source[], char searchfor[]);
char pattern[] = "ould";
int main()
{
	char line[MAXLINE];
	int found = 0;
	int position;
	
	while (getlines(line,MAXLINE) > 0)
		if ((position = strindex(line, pattern)) >= 0) {
			printf ("%s", line);
			printf ("The position of the pattern is %d",position); 
			found++;
	}
	return found;
}

int getlines(char s[], int lim)
{
	int c, i;
	i = 0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[])
{
	int i, j, k, position;
	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			position = i;
	}
	if (position > 0)
		return position;
	else 
		return -1;
}

