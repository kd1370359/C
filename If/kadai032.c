#include<stdio.h>
main()
{
	int ia;
	printf("整数？");
	scanf("%d", &ia);
	if (ia%2==0) {
		printf("その数は偶数です");
	}
	else {
		printf("その数は奇数です");
	}
}