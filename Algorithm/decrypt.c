#include<stdio.h>
main()
{
	int s[80];
	int i;
	printf("文字列を入力してください>");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("複合科文字列は,%S\n", &s[2]);
}

