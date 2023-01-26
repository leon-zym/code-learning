#include<stdio.h>

int swap(int x,int y);

int swap(int x,int y)
{
    int temp;

    printf("in swap,before,x = %d, y = %d\n",x,y);

    temp = x;
    x = y;
    y = temp;

    printf("in swap,after,x = %d, y = %d\n",x,y);       //在swap函数中，变量的值发生改变。
}

int main()
{
    int x = 3,y = 5;

    printf("in main,before,x = %d, y = %d\n",x,y);
    swap(x,y);                                          //传值
    printf("in main,after,x = %d, y = %d\n",x,y);       //但在main函数中，变量的值没有改变
}