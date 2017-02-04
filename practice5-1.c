/*
 * =====================================================================================
 *
 *       Filename:  practice5-1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/25 22时08分03秒
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

#define BUFSIZE 100
#define SIZE 10
int getch(void);
void ungetch(int);

char buf[BUFSIZE];
int bufp = 0;

int getint(int *pn);
int getch(void);
void ungetch(int c);

main()
{
	int n, array[SIZE], getint(int *);
	
	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		;
	for (int i = 0; array[i] != '\0'; i++)
		printf("The char in array is %d\n", array[i]);

}

int getint(int * pn)
{
	int c, sign;
	int sawsign;	
	while (isspace(c = getch()))
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (sawsign == (c == '+' || c == '-'))
		c = getch();
	if (!isdigit(c)) {
		ungetch(c);
		if (sawsign)
			ungetch((sign == -1) ? '-' : '+');
		return 0;
}
	for ( *pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + ( c - '0');
	*pn *= sign;
	if ( c != EOF )
		ungetch(c);
	return c;
}

int getch(void)
{
	return (bufp > 0) ? buf[bufp] : getchar();
}

void ungetch(int c)
{
	if ( bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}














