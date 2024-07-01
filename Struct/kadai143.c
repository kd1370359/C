#include<stdio.h>
#include<stdlib.h>
struct fruit 
{
	char name[30];
	int price;
	int point;
	int num;
	int total;
};
main()
{
struct fruit fdat;
sercpy(fdat.name, "peach");
fdat.price = 300;
fdat.point = 5;
fdat.num = 3;
fdat.total = fdat.price * fdat.num;
printf("è§ïiñº:%s\n", fdat.name);
printf("âøäi:%dâ~\n", fdat.price);
printf("Ç®Ç∑Ç∑Çﬂìx:");
for (int i = 0; i < fdat.point; i++) {
}
printf("\nå¬êî:%då¬\n", fdat.num);
printf("ã‡äz:\\%d-\n", fdat.total);
}