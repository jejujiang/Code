#include<stdio.h>
main()
{
	char *p, a[20];
	a[10] = "hello world";
	p = a;
	printf("%c\n", p+1);
}
