# Annoying-trumpet*(恼人的喇叭)*
## 简介
### 有恼人的东西
> [!TIP] 
> - ### “TIP”是提示的意思
> - ### 目前只有[恼人的喇叭直接版](https://github.com/2fand/Annoying-trumpet/blob/main/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%BE%A4/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%9B%B4%E6%8E%A5%E7%89%88.exe),[恼人的喇叭间接版(中文)](https://github.com/2fand/Annoying-trumpet/blob/main/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%BE%A4/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E9%97%B4%E6%8E%A5%E7%89%88(%E4%B8%AD%E6%96%87).exe)和[恼人的喇叭间接版(英文)](https://github.com/2fand/Annoying-trumpet/blob/main/恼人小喇叭群/恼人小喇叭间接版(英文).exe)可下载，以后会更新出更多的版本的(而且目前依然还有特性)
> - ### *声音开到最大以获得最佳的恼人效果*
> - ### 可以不用管所有的ini文件
> - ### 如果你想要不间断地恼人，就在你打开某个恼人小喇叭之后不停的回车(按回车键)
> - ### 如果你主打一个出其不意，就在你打开某个恼人小喇叭之后多打些字，等你觉得时机到了，就可以回车了，之后就等一会儿，等好后，就可以再次多打些儿字了，以此类推
> - ### 可以用[传声筒](https://baike.baidu.com/item/%E4%BC%A0%E5%A3%B0%E7%AD%92/2392042?fr=ge_ala)来恼你想要恼的人
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
![](https://github.com/2fand/Annoying-trumpet/assets/167662034/bc23bb65-9859-4b66-b4f1-af2df625f921)
## 恼人小喇叭们的对比
恼人小喇叭们 | 优缺点
-------- | -----
[直接版](https://github.com/2fand/Annoying-trumpet/blob/main/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%BE%A4/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%9B%B4%E6%8E%A5%E7%89%88.exe)  | 直接就可以恼人，而且最小，但还有特性
[间接版(中文)](https://github.com/2fand/Annoying-trumpet/blob/main/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E7%BE%A4/%E6%81%BC%E4%BA%BA%E5%B0%8F%E5%96%87%E5%8F%AD%E9%97%B4%E6%8E%A5%E7%89%88(%E4%B8%AD%E6%96%87).exe) | 可以自行决定什么时候恼人，但比直接版大了一点点，并且也有特性
[间接版(英文)](https://github.com/2fand/Annoying-trumpet/blob/main/恼人小喇叭群/恼人小喇叭间接版(英文).exe) | 可以自行决定什么时候恼人，但它最大，并且也有特性
## 以后将要更新或者修复的东西
- ### 恼人小喇叭群和源码群（更新成下面的图片）
![](https://img-blog.csdnimg.cn/direct/b8e88b69a9ec404d83c47b39d1368ac1.png#pic_center)
- ### 恼人小喇叭群里的恼人小喇叭们（更新时将新增只要输入“a”“s”“f”“d”“k”“l”“;”中的其中一个就能切换模式的功能（具体作用见下表）
输入的字符 | 作用
-- | - 
“a” | 切换成“在输出声音的同时输出小的‘**SB**’”的模式
“s” | 切换成“在输出声音的同时输出小的‘**SB**’”的模式
“d” | 切换成“在输出声音的同时输出小的‘**6**’”的模式
“k” | 切换成“在输出声音的同时输出大的‘**6**’”的模式
“f” | 切换成只发出声音的模式
“l” | 切换成“在输出声音的同时输出大的‘**FUCK YOU**’”的模式
“;” | 切换成“在输出声音的同时输出大的‘**FUCK YOU**’”的模式
“g” | 切换成“在输出声音的同时输出小的‘**くそったれ**’”的模式
“h” | 切换成“在输出声音的同时输出大的‘**くそったれ**’”的模式
- ### *“TIP”里提出的特性(可能)*
- ### *其他更新(可能没有)*
