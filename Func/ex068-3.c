#include<stdio.h>
main()
{
	int c;//getchar�֐��͓��͏I���̏ꍇ��EOF�i�|�P�j��߂�l�Ƃ��ĕԂ�
	//�A��1�������͂̒�΃p�^�[��
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}