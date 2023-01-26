#include<stdio.h>

int main()
{
    int array[2][3] = {{1,2,3},{4,5,6}};
    int (*p)[3] = array;        //定义一个数组指针指向二维数组

    printf("**(p+1): %d\n",**(p+1));        //验证指针和二维数组的关系
    printf("**(array+1): %d\n",**(array+1));
    
}