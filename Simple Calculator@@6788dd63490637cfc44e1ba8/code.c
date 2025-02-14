#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    if (op=='+')
        printf("%d", a+b);
    else if (op=='-')
        printf("%d", a-b);
    else if (op=='*')
        printf("%d", a*b);
    else if (op=='/'){
        if (b == 0)
            printf("Error: Division by zero is not allowed.\n");
        else
            printf("%d\n", a / b);
    } 
    else
        printf("Error: Invalid operator.\n");
    return 0;
}

