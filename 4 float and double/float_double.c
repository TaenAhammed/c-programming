#include<stdio.h>
int main() {
    printf("Float Size: %d \n", sizeof(float));
    printf("Double Size: %d \n", sizeof(double));
    printf("Long Size: %d \n", sizeof(long));

    float a = 6.5, b = 2.3;
    printf("Result: %f \n", a / b);
    printf("Result: %.2f \n", a / b);

    float x = 4 / 3;
    x = 4 / 3.0;
    x = 4.0 / 3;
    printf("Value of x = %f\n", x);

    double m = 10, n = 15, o = 30;
    printf("Result = %.3lf \n", m * n / o);
    return 0;
}
