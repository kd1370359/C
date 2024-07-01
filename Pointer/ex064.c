#include<stdio.h>
main()
{
	char* pride[3] = { "car","bus","shinkansen" };
	char* cp;
	int i;
	for (i = 0; i < 3; i++) {
		cp = pride[i];
		while (*cp) {
			printf("%s\n", pride[i]);
		}
		printf("\n");
	}
}