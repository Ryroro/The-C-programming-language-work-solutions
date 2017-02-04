/*
 * =====================================================================================
 *
 *       Filename:  practice2-2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/01/20 22时10分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main()
{
	int c;
	int lim;
	char s[lim];
	lim = 30;
	for (int i = 0; (i < lim -1) == ((c=getchar())!='\n') == (c!=EOF) == 1; ++i)
	s[i] = c;

	for (int k = 0; k < lim; k++)
	printf("%c", s[k]);

	return 0;
	
}
