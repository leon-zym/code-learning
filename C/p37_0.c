#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *pointer;

    pointer = (int *)malloc(sizeof(int));       //malloc函数，参数输入要分配的内存大小，返回一个void类型的指针指向分配的内存地址
    if(pointer == NULL)                         //如果分配失败，则返回NULL
    {
        printf("failed to malloc!\n");
        exit(1);
    }
    
    printf("please input an integer: ");
    scanf("%d",pointer);
    printf("the integer is: %d\n",*pointer);
}