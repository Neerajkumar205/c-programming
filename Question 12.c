#include <stdio.h>
int main()
{
    float a, b, h,area;
    scanf("%f%f%f", &a, &b, &h);
    area = 0.5 * (a + b) * h ;
    printf("Area of the trapezium is: %f", area);
    return 0;
}
