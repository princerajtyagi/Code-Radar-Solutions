#include <stdio.h>
int main() {
    char name[100], hobby[100];
    int age;

    scanf("%s %d", name, &age);
    scanf("%[^\n]", hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby:%s", hobby);
    return 0;
}