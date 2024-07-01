#include<stdio.h>
main()
{
	char moji;
	printf("1文字入力");
	scanf("%c", &moji);
	if (moji >= 'a' && moji <= 'Z') {
		printf("アルファベット");
	}
	else {
		printf("ERROR");
	}
}