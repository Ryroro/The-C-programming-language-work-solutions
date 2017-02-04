/*
 * =====================================================================================
 *
 *       Filename:  practice4-3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/23 21时33分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define BUFSIZE 100
#define PRINTFTOP '1'
#define CLEAR '2'
#define 


int sp = 0;
double val[MAXVAL];
char buf[BUFSIZE];
int bufp = 0;

int getop(char []);
void push(double);
double pop(void);

int getch(void);
void ungetch(int);
void printftop(void);
void clear(void);

main()
{
	int type;
	double op2;
	int mod_op1;
	int mod_op2;
	char s[MAXOP];
	
	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case PRINTFTOP:
			printftop();
			break;
		case CLEAR:
			clear();
			break;
		case '+':
			push(pop() + pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() / op2);
			else
			printf("error: zero divisior\n");
			break;  
		case '%':
 			mod_op1 = pop();
			mod_op2 = pop();
			push(mod_op2 % mod_op1); 
			break;  
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error: unknown command %s\n", s);
			break;
}
}
}


void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

int getop(char s[])
{
	int i, c;
	
	while((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if ( !isdigit(c) && c != '.' && c != '-')
		if (c == 'P')
			return PRINTFTOP;
		else if (c == 'C')
			return CLEAR;
		else
			return c;
	i = 0;
	if ( c == '-')
		s[++i] = c = getch();		
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if ((c = getch()) != EOF)
		ungetch(c);
	return NUMBER;
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


void printftop(void)
{
	int i = sp;
	if (i > 0)
		printf("The value on the top of the stack is %.3f\n", val[--i];)
	else	{
		printf("error: stack empty\n");
	}
} 

void switch(void)
{
	int i = sp;
	double j;
	if (i > 1)
		j = val[i-1];
		val[i-1] = val[i-2];
		val[i-2] = j;
	else if (i == 0){
		printf("error: stack empty.\n");
	}
	else if (i == 1) {
		printf("error: only one operator available in stack.\n");
	}
	

}

void clear(void)
{
	for (int i = 0; i < sp; i++) {
		val[i] = '0';
	}
	printf("stack has been cleared.\n");
}

