#include<stdio.h>
main()
{
	char M;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &M);
	if (M>='a'&&M<='z') {
		printf("���̕����͏������ł�\n");
	}
	if(M>='A'&&M<='Z') {
		printf("���̕����͑啶���ł�");
	}
	else {
		printf("ERROR");
	}
}