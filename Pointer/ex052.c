#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* pa = &a, * pb = &b;
	printf("実行前:a=%d\tb=%d\n", a, b);
	w = *pa;
	*pa = *pb;
	*pb = w;
	printf("実行後:a=%d\tb=%d\n", a, b);
	printf("&a=%d\t&b=%d\t&w=%d\n", &a, &b, &w);
	printf("pa=%d\tpb=%d\n", pa, pb);
	printf("&pa=%d\t&pb=%d\n", &pa, &pb);
}