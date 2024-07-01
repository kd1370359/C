#include<stdio.h>
#define DCNT 8
main()
{
	int i, j, w, gap;
	//シェルノート
	gap = DCNT / 2;
	while (gap > 0) {
		for (i = gap; i < DCNT; i++) {
			for (j = i - gap; j > 0; j -= gap) {
				int k;
				for(k=0;k<DCNT;k++)
			}
			printf("\n");
			if (d[j + gap] < d[j]) {
				w = d[j];
				d[j] = d[j + gap];
				d[j + gap] = w;
			}else{break}
		}
	}
	gap = gap / 2;
	printf
}