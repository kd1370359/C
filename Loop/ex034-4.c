#include<stdio.h>
main()
{
	int i, j, num;
	printf("���́H");
	scanf("%d", & num);
	i = 0;
	do {
		j = 0;
		do {
			printf(" ");
			j = j + 1;
		} while (j < num - 1);
		j = 0;
		do {
			printf("*");
			j = j + 1;
		} while (j <= i);
		printf("\n");
		i = i + 1;
	} while (i < num);
}