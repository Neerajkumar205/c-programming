#include<stdio.h>
#include<math.h>
int main()
{
    float principle, rate, time, CI;
    scanf("%f",&principle);
    scanf("%f",&time);
    scanf("%f",&rate);
    CI = principle*(pow((1+rate/100),time));
    printf("Compound Interest = %f",CI);
return 0;
}
