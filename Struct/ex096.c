#include<stdio.h>
struct syohindata {
	char name[20];
	int tanka;
};
void display3(struct syohindata* syohin);
main()
{
	struct syohindata syohin = { "�����S��,50" };
	display3(&syohin);
}
void display3(struct syohindata* syohin)
{
	printf("%s %d\n", syohin->name, syohin->tanka);
}