#include<stdio.h>

int square(int);

int square(int n)
{
    return n * n;
}

int main()
{
    int num;
    int (*fp)(int);         //函数指针

    printf("please input a integer: ");
    scanf("%d",&num);

    fp = square;            //函数名就是函数的地址

    printf("%d x %d = %d\n",num,num,(*fp)(num));
    return 0;
}