#include <stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* pa = a;
	float* pb = b;
	int i, asum = 0;
	float bsum = 0;
	for (i = 0; i < 6; i++)
	{
		asum += *pa;
		pa++;
	}
	printf("配列a 合計=%d\t平均=%.3f\n", asum, (float)asum / 6);
	// #defineの練習
	for (b_sum = 0, p_b = b, i = 0; i < B_SIZE; i++, p_b++) {
		b_sum += *p_b;
	}
	printf("配列b 合計 = %7.3f \t 平均 = %6.3f\n", b_sum, b_sum / B_SIZE);
}
}