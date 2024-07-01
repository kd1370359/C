#include<stdio.h>
main()
{
	int a,i=0,g=0;
	printf("®”-999‚ÅI—¹");
	scanf("%d", &a);
	do {
		g += a;
		printf("®”-999‚ÅI—¹");
		scanf("%d", &a);
		i++;
	} while ( a!= -999);
	printf("‡Œv=%d\n", g);
	printf("•½‹Ï=%f\n", (float)g / i);
}