#include <stdio.h>
#include <math.h>

int main(){
    float h, w;
    scanf("%f", &h);
    scanf("%f", &w);
    printf("%.6f",(w/((h/100)*(h/100))));
    return 0;
}