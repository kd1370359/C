#include<stdio.h>
main()
{
	int a = 100;
	int* pa;
	pa = &a;
	printf("a=%d\t&a=%p\n", a, &a);
	printf("pa=%p\t*pa=%d\t&pa=%p\n", pa, *pa, &pa);
}