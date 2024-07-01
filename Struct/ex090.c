#include<stdio.h>
struct syohindata {
	char name[20]
		int tanka;
};
main()
{
	struct syohindata syohin;
	struct syohindata* p;
	p = &syohin;
	printf("¤•i–¼=");
	scanf("%s"p->name);
	p->tanka = 30;
	printf("p->name=%s\n", p->name);
	printf("p->tanka=%s\n", p->tanka);
	printf("syohun.name=%s\n",syohin.name);
	printf("syohin.tanka=%s\n",syohin.tanka);
}
