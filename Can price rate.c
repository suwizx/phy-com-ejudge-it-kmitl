#include <stdio.h>
#include <math.h>

int main()
{

    double num1, num2, num3, radius, PI, volumn;

    scanf("%lf", &num1);
    getchar();
    scanf("%lf", &num2);
    getchar();
    scanf("%lf", &num3);

    PI = 3.14159265359;
    radius = num2 / 2;

    volumn = num3 * PI * pow(radius, 2);
    printf("Volume : %.2lfml\n",volumn);
    printf("Baht/ml : %.4lf\n",num1/volumn);
    return 0;
}