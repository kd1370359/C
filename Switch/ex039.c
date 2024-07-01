#include<stdio.h>
main()
{
	char moji; int su1, su2;
	printf("処理を入力:");
	scanf("%d%d", &su1, &su2);
	switch (moji) {
	case 'd':
		if (su1 > su2)
		{
			printf("最大値は%dです\n", su1);
		}
		else {
			printf("最大値は%dです\n", su2);
		}break;
	case's':
		if (su1 > su2)
		{
			printf("最大値は%dです\n", su1);
		}
		else {
			printf("最大値は%dです\n", su2);
		}break; break;//最小値を求める
	case'g':if (su1 > su2)
	{
		printf("最大値は%dです\n", su1);
	}
		   else {
		printf("最大値は%dです\n", su2);
	}break; break;//合計を求める
	case'h':break://平均を求める
	}
}