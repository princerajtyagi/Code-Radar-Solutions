#include <stdio.h>
int main() {
    char name[100], hobby[100];
    int age;
    scanf("%s %d %f" , name, &age, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %f", hobby);
    return 0;
}