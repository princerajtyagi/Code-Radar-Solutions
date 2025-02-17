#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if (ch == "A"){
        printf("Excellent");
    }else if (ch == "B"){
        printf("Good");
    }else
        printf("Invalid Grade");
    return 0;
}