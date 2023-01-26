#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10

int main(void)
{
    int *ptr = NULL;
    int i;

    ptr = (int *)malloc(N * sizeof(int));
    
    if(ptr == NULL)
    {
        exit(1);
    }
    memset(ptr, 0, N * sizeof(int));        //mem开头的函数的申明包含在string.h中。如memset函数会使用一个常量字节填充内存空间
                                            //也可用calloc函数直接申请经过初始化的内存空间
    for(i = 0; i < N; i++)                  //其函数原型为void *calloc(n, size)，表示申请n个总长度为size的连续内存空间，其值全部被初始化为0
    {
        printf("%d\t",ptr[i]);
    }
    putchar('\n');

    free(ptr);
}