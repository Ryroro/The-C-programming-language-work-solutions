/*
 * =====================================================================================
 *
 *       Filename:  practice2-4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/20 22时25分14秒
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
#define TRUE 1
#define FALSE 2
void squeeze(char s1[], char s2[]);
void get_a_line(char s[]);
int main()
{
	int c1, c2;
	char s1[MAXLINE];
	char s2[MAXLINE];
	get_a_line(s1);
	get_a_line(s2);
	squeeze(s1, s2);
	for(int i = 0; s1[i] != '\0'; i++)
		putchar(s1[i]);
	for(int k = 0; s2[k] != '\0'; k++)
		putchar(s2[k]);
	return 0;
}
void get_a_line(char s[])
{
	int c, i;
	printf("Type in a line:\n");
	for (i = 0; i < MAXLINE -1 && ((c = getchar()) != EOF) && c != '\n'; i++)		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';
}

void squeeze(char s1[], char s2[])
{
	int i,j,k, state;
	state = 0;
	i = 0;
	j = 0;
	for (; s1[i] != '\n'; i++){
		for(j = k = 0; s2[j] != '\n'; j++){
			if (s1[i] != s2[j])
				s2[k++] = s2[j];
			else
				state = TRUE;
		}
		if (state == TRUE){
		int c;
		c = s1[i];
		int x = i;
		int y = i;
		for ( ; s1[x] != '\n'; x++){
			if (s1[x] != c)
				s1[y++] = s1[x];
		}
		s1[x] = '\0';
		
	}
}
}

