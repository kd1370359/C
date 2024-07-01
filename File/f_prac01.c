#include<stdio.h>
main()
{
	int score = 0;
	char ch, name[20];
	FILE* fp;
	printf("プレイヤーの名前:");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア:%d('e'で終了)\n",score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	//ファイル書き込み
	//1.ファイルのオープン
	fp = fopen("score.txt", "w");
	//2.ファイルへのnameとscoreの書き込み
	fprintf(fp, "%s\n%d\n", name, score);
	//3.ファイルのクローズ
	fclose(fp);
}