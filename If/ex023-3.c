#include<stdio.h>
main()
{
	int A, B, C;
	printf("演算子を入力:");
	scanf("%d", &C);
	printf("2つの整数を入力:");
	scanf("%d%d,&A,&B");
	if (C = 1) {
		printf("%d\n", A + B);
	}
	else {
		if (C = 2) {
			printf("%d\n", A - B);
		}
		else {
			if (C = 3) {
				printf("%d\n", A * B);
			}
			else {
				if (C = 4) {
					printf("%d\n", A / B);
				}
			}
		}
	}
}
