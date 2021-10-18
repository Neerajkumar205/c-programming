#include <stdio.h>
int main()
{
    float pie=3.14,radius,volume;
    scanf("%f",&radius);
    volume=(4.0/3.0)*pie*(radius*radius*radius);
    printf("Volume of sphere = %f",volume);
    return 0;
}
