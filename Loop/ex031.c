#include<stdio.h>
main(){
	int sum, i;
	sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum += i;
	printf("1から%dまでの和=%d\n", i, sum);
}
}