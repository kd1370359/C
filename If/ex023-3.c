#include<stdio.h>
main()
{
	int A, B, C;
	printf("���Z�q�����:");
	scanf("%d", &C);
	printf("2�̐��������:");
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
