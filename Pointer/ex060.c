#include<stdio.h>
main()
{
	char data[] = "Language", * pdata, ch;
	int i;
	printf("data[]=%s\n", data);
	printf("検索文字は?");
	scanf("%c", &ch);
	printf("検索結果は,");
	for (pdata = data, i = 0; *(pdata + i) != '\0'; i++)
	{
		if (ch == *(pdata + i))
		{
			printf("%d", i + 1);
		}
	}
	printf("文字目です\n");
}