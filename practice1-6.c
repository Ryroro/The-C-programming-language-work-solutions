#include <stdio.h>
int main()
{
	int c;
	if ((c = (getchar()!= EOF)) == 0)
		printf("The value is 0.\n");
	else if ((c = (getchar() != EOF)) == 1)
		printf("The value is 1.\n");
	return 0;
}
