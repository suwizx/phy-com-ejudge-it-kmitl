#include <stdio.h>
#include <math.h>

int main(){
    int input_sec, day, hours, min , sec;

    scanf("%d", &input_sec);
    sec = input_sec;
    day = floor(input_sec / (24 * 60 * 60));
    input_sec -= day * 24 * 60 * 60;
    hours = floor(input_sec / (60 * 60));
    input_sec -= hours * 60 * 60;
    min = floor(input_sec / 60);
    input_sec -= min * 60;
    printf("%d s = %d d %d h %d m %d s", sec , day , hours , min , input_sec);

    return 0;
}