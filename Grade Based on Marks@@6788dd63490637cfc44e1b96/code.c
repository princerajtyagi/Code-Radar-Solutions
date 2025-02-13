// Your code here...#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 90)
        return "A";
    else if (a >= 80)
        return "B";
    else if (a >= 70)
        return "C";
    else if (a >= 60)
        return "D";
    else
        return "F";
    return 0;
}
