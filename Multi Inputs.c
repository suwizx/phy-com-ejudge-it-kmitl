#include <stdio.h>

int main(){
    char word1[30];
    char word2[30];
    char word3[30];
    char word4[30];
    scanf("%s",word1);
    scanf("%s",word2);
    scanf("%s",word3);
    scanf("%s",word4);
    printf("String 1: %.3s\n", word1);
    printf("String 2: %.4s\n", word2);
    printf("String 3: %.5s\n", word3);
    printf("String 4: %.6s\n", word4);

    return 0;
}