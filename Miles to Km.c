#include <stdio.h>
#include <math.h>

int main(){
    double mile, km;

    scanf("%lf", &mile);
    km = mile * 1.60934;
    printf("%.2lf", km);
    return 0;
}