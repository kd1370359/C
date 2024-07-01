#include<stdio.h>
main()
{
	int ia, ib,kotae,A;
	ia = 100, ib = 7;
	kotae = ia + ib;
	printf("%d+%d=%d\n", ia ,ib,kotae);
	kotae = ia - ib;
	printf("%d-%d=%d\n", ia, ib, kotae);
	kotae = ia * ib;
	printf("%d*%d=%d\n", ia, ib, kotae);
	kotae = ia / ib % A;
	printf("%d/%d=%d ‚ ‚Ü‚è%d\n", ia, ib, kotae,ia%ib);
}