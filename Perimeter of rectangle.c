#include <stdio.h>

int main(){
    double side1, side2;

    scanf("%lf", &side1);
    getchar();
    scanf("%lf", &side2);

    printf("Perimeter of rectangle = %.4lf units", (side1 + side2) * 2);

    return 0;
}