#include<stdio.h>
main()
{
	int maxscore,score = 0;
	char ch, maxname[20],name[20];
	FILE* fp;
	//score.txtからの読み込み
	//1.ファイルのオープン
	fp = fopen("score.txt", "r");
	//2.maxname,maxscoreの読み込み
	fscanf(fp, "%s%d", maxname, &maxscore);
	//3.ファイルのクローズ
	fclose(fp);
	//4.画面上に最高得点者の情報を表示
	printf("最高得点 名前:%s スコア:%d", maxname, maxscore);
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
	if (score > maxscore) {
		//ファイル書き込み
		//1.ファイルのオープン
		fp = fopen("score.txt", "w");
		//2.ファイルへのnameとscoreの書き込み
		fprintf(fp, "%s\n%d\n", name, score);
		//3.ファイルのクローズ
		fclose(fp);
		printf("ハイスコア更新\n");
	}
}