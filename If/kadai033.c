#include<stdio.h>
main()
{
	char M;
	printf("アルファベット？");
	scanf("%c", &M);
	if (M>='a'&&M<='z') {
		printf("その文字は小文字です\n");
	}
	if(M>='A'&&M<='Z') {
		printf("その文字は大文字です");
	}
	else {
		printf("ERROR");
	}
}