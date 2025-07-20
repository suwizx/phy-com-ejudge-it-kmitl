#include <stdio.h>

int main(){
    char name[31];
    char lastname[31];
    char id[9];
    int dd, yy, mm;
    float gpa;

    scanf("%s", name);
    scanf("%s", lastname);
    scanf("%s", id);
    scanf("%d/%d/%d", &dd , &mm , &yy);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", name, lastname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%d\n",dd,mm,yy);
    printf("GPA: %.2f\n", gpa) ;

    return 0;
}