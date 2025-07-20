#include <stdio.h>

int main()
{

    char firstname[30];
    char lastname[30];

    char fullname2[30];
    char fullname3[30];

    scanf("%s", firstname);
    scanf("%s", lastname);
    getchar();
    scanf("%[^\n]", fullname2);
    getchar();
    scanf("%[^\n]", fullname3);

    printf("Person 1: %s %s\n", firstname, lastname);
    printf("Person 2: %s\n", fullname2);
    printf("Person 3: %s\n", fullname3);

    return 0;
}