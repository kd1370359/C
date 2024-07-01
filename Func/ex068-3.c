#include<stdio.h>
main()
{
	int c;//getchar関数は入力終了の場合にEOF（－１）を戻り値として返す
	//連続1文字入力の定石パターン
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}