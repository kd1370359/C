#include<stdio.h>
main()
{
	int a,i=0,g=0;
	printf("����-999�ŏI��");
	scanf("%d", &a);
	do {
		g += a;
		printf("����-999�ŏI��");
		scanf("%d", &a);
		i++;
	} while ( a!= -999);
	printf("���v=%d\n", g);
	printf("����=%f\n", (float)g / i);
}