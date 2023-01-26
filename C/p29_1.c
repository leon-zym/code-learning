#include<stdio.h>

int swap(int *x,int *y);

int swap(int *x,int *y)
{
    int temp;

    printf("in swap,before,x = %d, y = %d\n",*x,*y);
    temp = *x;
    *x = *y;
    *y = temp;
    printf("in swap,after,x = %d, y = %d\n",*x,*y);       //通过指针，修改了变量的值
}

int main()
{
    int x = 3,y = 5;

    printf("in main,before,x = %d, y = %d\n",x,y);
    swap(&x,&y);                                        //传址
    printf("in main,after,x = %d, y = %d\n",x,y);       //变量被修改
}