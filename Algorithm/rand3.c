#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int A;
	srand(time(0));
	rand();
	A = rand() % 100 + 1;
	if (A <= 30){
		printf("��S�̈ꌂ");
	}
	else {
		printf("�ʏ�U��");
	}
}