#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

int main()
{
    struct Complex num1, num2, result;

    
    printf("For 1st complex number\nEnter the real and imaginary parts respectively: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("For 2nd complex number\nEnter the real and imaginary parts respectively: ");
    scanf("%f %f", &num2.real, &num2.imag);

    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
//Version 1