# Annoying-trumpet
## 简介
### 有恼人的东西
> [!TIP] 
> - ### 目前只有[恼人的喇叭直接版](https://github.com/2fand/Annoying-trumpet/blob/main/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%BE%A4/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%9B%B4%E6%8E%A5%E7%89%88.exe),[恼人的喇叭间接版(中文)](https://github.com/2fand/Annoying-trumpet/blob/main/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%BE%A4/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E9%97%B4%E6%8E%A5%E7%89%88(%E4%B8%AD%E6%96%87).exe)和[恼人的喇叭间接版(英文)](https://github.com/2fand/Annoying-trumpet/blob/main/恼人小喇叭群/恼人小喇叭间接版(英文).exe)可下载，以后会更新出更多的版本的(而且目前依然还有特性)
> - ### *声音开到最大以获得最佳的恼人效果*
> - ### 可以不用管ini文件

## 为什么我创建这个仓库
### 有一次考试考了***0***分，而且我也被***惩罚***了，并且我心里也很***不愉快***，因此我创建了这个仓库
## 源码
### 直接版
```c
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
```
### 间接版(中文)
```c
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
```
### 间接版(英文)
```c
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
```
## 现在的流程图
![](https://img-blog.csdnimg.cn/direct/5820edf62aca4f358b803b8eaa939443.png)
## 恼人小喇叭们的对比
恼人小喇叭们 | 优缺点
-------- | -----
直接版  | 直接就可以恼人，而且最小，但还有特性
间接版(中文) | 可以自行决定什么时候恼人，但比直接版大了一点点，并且也有特性
间接版(英文) | 可以自行决定什么时候恼人，但它最大，并且也有特性
## 以后将要更新的东西和修改
- ### *修复“帮助”里提出的特性(可能)*
- ### *其他更新(可能没有)*
