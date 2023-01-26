#include<stdio.h>

long func(int);

long func(int n)
{
    long result;            //阶乘的结果通常较大，用long int类型

    if(n > 0)               //设置合适的退出条件
    {
        result = n * func(n - 1);       //递归
    }
    else
    {
        result = 1;
    }
    return result;      //在最里层返回
}

int main()
{
    int n;
    long result;

    printf("please intput a number: ");
    scanf("%d",&n);
    result = func(n);
    printf("%d的阶乘是：%ld\n",n,result);
    return 0;
}