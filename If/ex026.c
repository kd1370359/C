#include<stdio.h>
main()
{
	int A;
	printf("月を入力:");
	scanf("%d",&A);
	if (A ==2) {
		printf("最終日は28日です\n");
	}
	else {
		if (A == 4 || A == 6 || A == 9 || A == 11 || ) {
			printf("最終日は30日です\n");
		}
		else {
			printf("最終日は31日です\n");
		}
	}
}