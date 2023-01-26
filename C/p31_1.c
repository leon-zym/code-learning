#include<stdio.h>

int count = 0;          //全局变量，此程序中的所有函数都可以访问和修改。若不对全局变量赋初始值，则自动初始化为0

void a()
{
    count++;
}

void b()
{
    count++;
}

void c()
{
    count++;
}

int main()
{
    a();
    b();
    c();
    b();

    printf("now, count = %d\n",count);
}