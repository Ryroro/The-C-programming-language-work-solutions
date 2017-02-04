/*
 * =====================================================================================
 *
 *       Filename:  practice5-4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/29 08时38分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define IN 1
#define OUT 2
#define MAXLINE 1000
int strend(char *s, char *t);
main()
{	
	int c;
	int i = 0;
	char s[MAXLINE];
	char t[MAXLINE];
	printf("Type in the first line: \n");
	while ((c = getchar()) != '\n') {
		s[i] = c;
		i++;
	}
	i = 0;
	printf("\nType in the second line: \n");
	while ((c = getchar()) != '\n') {
		t[i] = c;
		i++;
	}
	if (strend(s,t))
		printf("\nThe second line is at the end of the first line.\n");
	else
		printf("\nThe second line is not at the end of the first line.\n"); 
	
	
}

int strend(char *s, char *t)
{
	int i, state,c;
	i = 0;
	char *t_2 =  t;
	while (*s != '\0') {
		if (*s == *t) {
			state = IN;
			t++;
		}
		else if (*s != *t) {
			state = OUT;
			t = t_2;
		}
		s++;
	}
	if (state == IN)
		return 1;
	else if (state == OUT)
		return 0;
	
}

