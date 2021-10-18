#include<stdio.h>
int main()
{
int a,b;
float q,r;
scanf("%d",&a);
scanf("%d",&b);
q=a/b;
r=a%b;
printf("The quotient is= %f \n",q);
printf("The remainder is= %f",r);
return 0;
}
