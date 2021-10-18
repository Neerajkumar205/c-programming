#include <stdio.h>
int main()
{
    float r,d,c,a;
    scanf("%f", &r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*(r*r);
    printf("Diameter = %f \n",d);
    printf("Circumference = %f \n",c);
    printf("Area = %f ",a);
    return 0;
}
