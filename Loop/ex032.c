#include<stdio.h>
main()
{
	int i, sum;
	printf("数を入れて");
	scanf("%d", &sum);
	for (i=1;i<=5;i++)
	{
		printf("%d ", sum * i);
	}
}