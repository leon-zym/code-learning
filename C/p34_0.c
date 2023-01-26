#include<stdio.h>

void recursion(void);

void recursion(void)
{
    printf("hello!\n");
    recursion();        //函数调用自己，递归
}

int main()
{
    recursion();        //无限执行
    return 0;           //递归必须有结束条件，否则程序将崩溃
}