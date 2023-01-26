#include<stdio.h>

int max(int,int);      //函数可以先声明，后面再定义。声明时可以不写参数名，但要表明参数的类型和个数

int main()
{
    int i,j;
    int result;

    printf("请输入两个整型数值：\n");
    scanf("%d%d",&i,&j);
    result = max(i,j);      //函数调用
    if(result == 0)
    printf("这两个数相等");
    else
    printf("其中较大的一个数是：%d",result);
}

int max(int i,int j)        //函数定义
{
    int result;
    if(i > j)
    result = i;
    else if(i < j)
    result = j;
    else
    result = 0;     //考虑两数相等的情况

    return result;      //函数返回一个值
}