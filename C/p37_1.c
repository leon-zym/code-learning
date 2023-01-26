#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *pointer;

    pointer = (int *)malloc(sizeof(int));
    if(pointer == NULL)
    {
        printf("failed to malloc!\n");
        exit(1);
    }
    
    printf("please input an integer: ");
    scanf("%d",pointer);
    free(pointer);                              //free函数，参数输入由malloc，calloc，realloc分配的内存地址的指针，会释放其内存空间
    printf("the integer is: %d\n",*pointer);
}