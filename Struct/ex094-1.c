#include<stdio.h>
struct profile {
	int nen; int tuki; int hi;
};
struct profile {
	char name[20]; int birth[3]; char blood[5];
};
main()
{
	struct profile student[5] = {
		{"アーサー",{2000,1,1},"A"},
		{"ルシファー",{2000,2,2},"B"},
		{"クシナダ",{2000,1,3},"O"},
		{"ネオ",{2000,2,4},"AB"},
		{"マサムネ",{2000,2,5},"A"}
	};
	struct profile* p;
	int i;
	p = student;
		for (i = 0; i < 5; i++)
		{
			if (p->day.tuki==2)
			{
				printf("%s--%d年%d月%d日%d生まれ　血液型-%s型\n",
					p->name, p->day.nen, p->nen.tuki, p->day.hi p->blood);
			}
			p++;
		}