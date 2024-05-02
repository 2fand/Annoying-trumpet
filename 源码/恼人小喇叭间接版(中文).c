#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    char i = '\0';
    printf("******************************\n*只要随便输入，便可开始恼人！*\n******************************\n\n");
    scanf("%c",&i);
    while (1) {
        printf("\a");
        scanf("%c",&i);
    }
    return 0;
}