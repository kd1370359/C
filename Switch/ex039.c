#include<stdio.h>
main()
{
	char moji; int su1, su2;
	printf("���������:");
	scanf("%d%d", &su1, &su2);
	switch (moji) {
	case 'd':
		if (su1 > su2)
		{
			printf("�ő�l��%d�ł�\n", su1);
		}
		else {
			printf("�ő�l��%d�ł�\n", su2);
		}break;
	case's':
		if (su1 > su2)
		{
			printf("�ő�l��%d�ł�\n", su1);
		}
		else {
			printf("�ő�l��%d�ł�\n", su2);
		}break; break;//�ŏ��l�����߂�
	case'g':if (su1 > su2)
	{
		printf("�ő�l��%d�ł�\n", su1);
	}
		   else {
		printf("�ő�l��%d�ł�\n", su2);
	}break; break;//���v�����߂�
	case'h':break://���ς����߂�
	}
}