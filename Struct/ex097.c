#include<stdio.h>
 #define DATAEND -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken kendata[] = { {1,"�k�C��",NULL},
		{2,"�X",NULL},{3,"���",NULL},{4,"�{��",NULL},{5,"�H�c",NULL},
		{6,"�R�`",NULL},{7,"����",NULL},{DATAEND,"",NULL} };
	struct ken* p, * wp;
	p = wp = kendata;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATAEND);
	for (p = kendata; p->code != DATAEND; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}