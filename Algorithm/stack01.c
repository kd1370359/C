#include<stdio.h>
#define STACKSISE 8
int stack[STACKSISE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);
main()
{
	int key, data, resurlt;
	do {
		printf("\n�v�b�V����i�A�|�b�v��o����́�\n");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", & data);
			resurlt = push(data);
			if (resurlt == -1) {
				printf("\n�X�^�b�N����t\n");
			}
			else {
				display();
			}

		}
		if (key == '0') {
			resurlt = pop(&data);
			if (resurlt == -1) {
				printf("\n�X�^�b�N����\n");
			}
			else {
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}
void display(void)
{
	int i;
	printf("\n���݂̃X�^�b�N�̓��e\n");
	for (i = 0; i < STACKSISE; i++){
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("sp�������Ă��鏊(����sp��%d)", sp);
		}
		printf("\n");
	}
	return;
}