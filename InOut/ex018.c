#include<stdio.h>
main()
{
	int A, B, C,goukei;
	printf("�������R����:");
	scanf("%d%d%d",&A,&B,&C);
	goukei = A + B + C;
	printf("���v=%d", goukei);
	//printf("����=%.2f",goukei/ 3.0);
	printf("����=%.2f", (float)goukei / 3);
}