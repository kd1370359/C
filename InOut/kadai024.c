#include<stdio.h>
main()
{
	int ia=25, ib=3,kotae;
	printf("2�̐��l");
	scanf("%d %d", &ia,&ib);
	kotae = ia + ib;
	printf("%d+%d=%d\n", ia, ib, kotae);
	kotae = ia - ib;
	printf("%d-%d=%d\n", ia, ib, kotae);
	kotae = ia * ib;
	printf("%d*%d=%d\n", ia, ib, kotae);
	kotae = ia / ib;
	printf("%d/%d=%d�@���܂�%d", ia, ib, kotae,ia%ib);
}