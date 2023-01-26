#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *ptr = NULL;        //定义一个空指针
    int num, i;

    printf("please input the number of integers: ");
    scanf("%d",&num);
    ptr = (int *)malloc(num * sizeof(int));     //用malloc函数申请一个任意尺寸的空间
    for(i = 0; i < num; i++)
    {
        printf("please input NO.%d number: ",i+1);
        scanf("%d",&ptr[i]);        //将数值依次存放进申请的空间里
    }
    printf("input finished. the numbers you inputed are:\n");
    for(i = 0; i < num; i++)
    {
        printf("%d\t",ptr[i]);      //将申请的空间里的数值依次打印出来
    }
    putchar('\n');
    free(ptr);      //释放申请的内存空间。malloc和free切记要成对使用！
}