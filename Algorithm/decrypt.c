#include<stdio.h>
main()
{
	int s[80];
	int i;
	printf("���������͂��Ă�������>");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("�����ȕ������,%S\n", &s[2]);
}

