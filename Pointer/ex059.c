#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data[15];
	char* pdata, * pdata2;
	pdata = data;
	pdata2 = data2;
	printf("data[]=%s\n", pdata);
	while (*pdata2++ = *pdata2);
	pdata2 = data2;
	printf("data2[]=%s\n", pdata2);
	while (*pdata2)
	{
		putchar('\n');
	}
}