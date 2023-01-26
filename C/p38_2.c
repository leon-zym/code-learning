#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i, num;
    int count = 0;
    int *ptr = NULL;                                        //这里必须初始化为NULL

    do
    {
        printf("please input an integer(exit with \"-1\"):\n");
        scanf("%d",&num);
        count++;                                            //表示目前获取的数值的个数

        ptr = (int *)realloc(ptr, count * sizeof(int));     //realloc函数，用法略。。。。。注意：若指针ptr参数为NULL，则该函数作用相当于malloc，
        if(ptr == NULL)                                     //否则ptr的值必须由先前调用malloc，calloc或realloc函数返回
        {
            exit(1);                                        //检测内存是否分配成功
        }

        ptr[count-1] = num;                                 //将获取的数值放在新分配的内存空间里
    } while (num != -1);
    
    printf("the numbers you inputed are:\n");
    for(i = 0; i < count-1; i++)                            //count-1是为了不打印出-1这个值
    {
        printf("%d\t",ptr[i]);
    }
    putchar('\n');
    free(ptr);
}