#include<stdio.h>
main()
{
	int tbl[][3] = { {10.20.30},
		{40,50,60},
		{70,80,90} };
	int* ptbl, i;
	ptbl = tbl[0];
	printf("�񎟌��z��tbl�̓��e\n");
	for (i = 0; i < (3 * 3); i++) {
		printf(" %d", *ptbl++);
	}
}