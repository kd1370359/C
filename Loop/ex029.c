#include<stdio.h>
main()
{
	int num,i;
	printf("��������:");
	scanf("%d", &num);
	i = 0;
	while (1 < num) {
		printf("*");
		i += 1;
	}
}