#include <stdio.h>
#include <math.h>

int main(){

    double side1, side2 ,result;

    scanf("%lf", &side1);
    getchar();
    scanf("%lf", &side2);

    result = sqrt(pow(side1,2)+pow(side2,2));

    printf("%.2lf", result);
    return 0;
}