#include<stdio.h>
main()
{
	float ia,ib;
	printf("�����H");
	scanf("%f %f", &ia,&ib);
	if (ia < ib) {
		printf("�傫���ق���%1f�ł�", ib);
	}
	else {
		printf("�������ق���%1f�ł�", ia);
	}
}
