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
printf("���i��:%s\n", fdat.name);
printf("���i:%d�~\n", fdat.price);
printf("�������ߓx:");
for (int i = 0; i < fdat.point; i++) {
}
printf("\n��:%d��\n", fdat.num);
printf("���z:\\%d-\n", fdat.total);
}