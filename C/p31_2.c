#include<stdio.h>

int a = 5;
int b = 6;

void func()
{
    int a;          //局部变量，若与某全局变量重名，则屏蔽全局变量，就近原则

    a = 12;         //修改的是局部变量
    b = 13;         //修改的是全局变量
    printf("in func, a = %d, b = %d\n",a,b);
}

int main()
{
    printf("in main, before, a = %d, b = %d\n",a,b);
    func();
    printf("in main, after, a = %d, b = %d\n",a,b);
}