/*
 * =====================================================================================
 *
 *       Filename:  practice5-2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/25 22时40分07秒
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

double getfloat(double *pn)
{
	int c, sign;
	int power = 10;
	while (isspace(c = getch()))
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	if (c == '.');
		c = getch();
		for(*pn; isdigit(c); c = getch()) {
			*pn = *pn + (c - '0') / power;
			power = power * 10;
		}
	*pn *= sign;
	if ( c != EOF)
		ungetch(c);
	return c;
		
}

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

