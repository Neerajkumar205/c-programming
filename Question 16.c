#include <stdio.h>
int main()
{
    int p, q;
    int sum, sub, mul, mod;
    float div;
    scanf("%d%d", &p, &q);
    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = (float)p / q;
    mod = p % q;
    printf("Addition = %d\n",sum);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Division = %f\n",div);
    printf("Modulus = %d\n",mod);
    return 0;
}
