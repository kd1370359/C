#include<stdio.h>
main()
{
	int a, b;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	printf("�֐����s�O�̒l:\na=%d\nb=%d\n", a,b);
}
void swap(int* a, int* b) {
	int w;
	*a = *b;
	*b = w;
}