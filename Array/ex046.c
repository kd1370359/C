#include<stdio.h>
main()
{
	int i, gokei,j;
	int a[][3] = { {10,20,30,},{1,2,3} };
	for (j = 0; j < 2; j++) {
		for (gokei = 0, i = 0; i <= 2; i++);
		{
			printf("a[%d][%d]=%d\n", j, i, a[j][i]);
			gokei += a[j][i];
		}
		printf("%d行目の合計=%d\n\n", j, gokei);
	}																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												
	for (gpkei = 0, i = 0; i <= 2; i++) {
		printf("a[1][%d]=%d\n", i, a[1][i]);
		gokei += a[1][i];
	}
	printf("1行目の合計=%d\n", gokei);
}