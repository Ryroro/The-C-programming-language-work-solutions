#include <stdio.h>
int main()
{
	int c;
	printf("Type something now please:\n");
	while((c = getchar()) != EOF){
		if ( c == '\t'){
			putchar('\\');
			putchar('t');
}
		else if ( c == '\b'){
			putchar('\\');
			putchar('b');
}
		else
			putchar(c);

	}
	return 0;
}


