#include<stdio.h>
main()
{
	float no;
	printf("実数を入れて");
	scanf("%f,&no");
	printf("2倍%.2f\n", no * 2);
	printf("3倍%.2f\n", no * 3);
}