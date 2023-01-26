#include<stdio.h>

int sum(int n)      //函数定义
{
    int result = 0;
    int i;
    for(i = 0;i <= n;i++)
    {
        result = result + i;        //阶乘循环
    }
    return result;
}

int main()
{
    int n,result;
    printf("请输入n的值：");
    scanf("%d",&n);
    result = sum(n);        //函数调用
    printf("阶乘的结果是：%d",result);
}