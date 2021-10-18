#include<stdio.h>
int main()
{
    int p=30000,r1=20,r2=30,n,s,pop1,pop2;
    n=p*(r1/100.0);
    pop1=p+n;
    s=pop1*(r2/100.0);
    pop2=pop1+s;
    printf("Population after 2 year: %d",pop2);
    return 0;
}
