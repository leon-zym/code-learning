#include<stdio.h>

void func(int array[]);

void func(int array[])
{
    int i;

    array[5] = 999;
    printf("in func,after changing\n");

    for(i = 0;i < 10;i++)
    printf("array[%d] = %d\n",i,array[i]);      //在func函数中，数组发生改变
}

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int i;

    func(array);                                //传递进func函数的不是整个数组，而是数组第一个元素的地址，相当于一个指针被传递进函数
    printf("in main,after changing\n");

    for(i = 0;i < 10;i++)
    printf("array[%d] = %d\n",i,array[i]);      //在main函数中，数组也被改变了
}