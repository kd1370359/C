#include<stdio.h>
main()
{
	int a[2][2][3] = { {{3,4,5},{4,5,6}}
					,{{2,2,3},{2,5,6}} };
	int i, j, k, sum;
	for (sum = 0, i = 0; i < 3; i++) {
		sum += a[0][j][i];
	}
}