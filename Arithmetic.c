#include <stdio.h>
#include <math.h>

int main(){

    double number1, number2;

    scanf("%lf,%lf", &number1, &number2);

    printf("The sum of the given numbers : %lf\n", number1 + number2);
    printf("The difference of the given numbers : %lf\n", number1 - number2);
    printf("The product of the given numbers : %lf\n", number1 * number2);
    printf("The quotient of the given numbers : %lf\n", number1 / number2);

    return 0;
}