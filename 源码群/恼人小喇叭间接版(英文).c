#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    char i = '\0';
    printf("****************************************************************\n*As long as you input it casually,you can start annoying human!*\n****************************************************************\n\n");
    scanf("%c",&i);
    while (1) {
        printf("\a");
        scanf("%c",&i);
    }
    return 0;
}