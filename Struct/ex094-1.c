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
		{"�A�[�T�[",{2000,1,1},"A"},
		{"���V�t�@�[",{2000,2,2},"B"},
		{"�N�V�i�_",{2000,1,3},"O"},
		{"�l�I",{2000,2,4},"AB"},
		{"�}�T���l",{2000,2,5},"A"}
	};
	struct profile* p;
	int i;
	p = student;
		for (i = 0; i < 5; i++)
		{
			if (p->day.tuki==2)
			{
				printf("%s--%d�N%d��%d��%d���܂�@���t�^-%s�^\n",
					p->name, p->day.nen, p->nen.tuki, p->day.hi p->blood);
			}
			p++;
		}