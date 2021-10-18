#include<stdio.h>
int main()
{
	int days,y m,d;	
	scanf("%d", &days);
	y=days/365;
	days=days-(365*y);
	m=days/30;
	d=days-(m*30);
	printf("Years - %d \n",y);
	printf("Months - %d\n",m);
	printf("Days - %d",d);
	return 0;
}
