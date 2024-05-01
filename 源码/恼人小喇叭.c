#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    char i = '\0';
    while (1) {
        printf("\a");//→↘
        scanf("%c",&i);//→特性(输入的东西越长，发出恼人的声音的间隔就越长)
    }
    return 0;
}