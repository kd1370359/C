#include<stdio.h>
main()
{
	float ia,ib;
	printf("実数？");
	scanf("%f %f", &ia,&ib);
	if (ia < ib) {
		printf("大きいほうは%1fです", ib);
	}
	else {
		printf("小さいほうは%1fです", ia);
	}
}
