#include <stdio.h>
int main() {
    char name[100], hobby[100];
    int age;

    scanf("%s %d %[^\n]" , name, &age, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby:%s", hobby);
    return 0;
}