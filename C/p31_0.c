#include<stdio.h>

int main()
{
    int i = 999;

    printf("before, i = %d\n",i);

    for(int i = 1;i < 10;i++)           //在for循环中定义的i只存在于循环中，出了循环即销毁
    {
        printf("in for, i = %d\n",i);
    }

    printf("after, i = %d\n",i);
}