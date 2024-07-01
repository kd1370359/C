#include<stdio.h>
main()
{
	char* ptbl[] = { "Programing1","Alrorithm","Programing2","C" };
	char* w;
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = i+1; j < 4; j++) {
			if (strcmp(ptbl[i], ptbl[j]) > 0) {
				w = ptbl[i];
				ptbl[i] = ptbl[j];
				ptbl[j] = w;
			}
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%s\n", ptbl[i]);
	}
}