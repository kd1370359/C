#include<stdio.h>
main()
{
	char data[] = "Language", * pdata, ch;
	int i;
	printf("data[]=%s\n", data);
	printf("����������?");
	scanf("%c", &ch);
	printf("�������ʂ�,");
	for (pdata = data, i = 0; *(pdata + i) != '\0'; i++)
	{
		if (ch == *(pdata + i))
		{
			printf("%d", i + 1);
		}
	}
	printf("�����ڂł�\n");
}