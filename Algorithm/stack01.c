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
		printf("\nプッシュはi、ポップはoを入力＞\n");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", & data);
			resurlt = push(data);
			if (resurlt == -1) {
				printf("\nスタックが一杯\n");
			}
			else {
				display();
			}

		}
		if (key == '0') {
			resurlt = pop(&data);
			if (resurlt == -1) {
				printf("\nスタックが空\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}
void display(void)
{
	int i;
	printf("\n現在のスタックの内容\n");
	for (i = 0; i < STACKSISE; i++){
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("spが示している所(現在spは%d)", sp);
		}
		printf("\n");
	}
	return;
}