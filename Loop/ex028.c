#include<stdio.h>
main()
{
	int goukei, ia;//整数型変数goukei,iaの宣言
	goukei = 0;//変数goukeiを0にリセット
	printf("数を入れて");//入力を促す表示
	scanf("%d", &ia);//変数iaにキーボード入力
	while (ia != -999) {//iaがー９９９でなければループ
		goukei += ia;//変数goukeiにiaを足し合わせる
		printf("数を入れて");//入力を促す
		scanf("%d", &ia);//変数iaにキーボード入力
	}//ループの終了
	printf("合計=%d\n", goukei);//合計値の表示
}