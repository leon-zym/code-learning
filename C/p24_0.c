#include<stdio.h>

int main()
{
    int array[4][5] = {0};
    int i,j,k = 0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            array[i][j] = k++;      //循环嵌套给二维数组赋值
        }
    }
    
    printf("array: %p\n",array);    //二维数组名的含义是指第一行整个数组的地址。
    printf("array + 1: %p\n",array+1);      //不懂为什么？按理来说应该是第二行整个数组的地址啊，也就是第二行数组第一个元素地址的地址啊？
    printf("*(array + 1): %p\n",*(array + 1));      //指第二行数组第一个元素的地址
    printf("array[1]: %p\n",array[1]);      //语法糖，array[1] == *(array+1)
    printf("&array[1][0]: %p\n",&array[1][0]);      //印证上面两种写法是对的
    printf("array[1][0]: %d\n",array[1][0]);
    printf("**(array + 1): %d\n",**(array + 1));    //双重解引用，取出第二行数组第一个元素的值
    printf("array[1][3]: %d\n",array[1][3]);
    printf("*(*(array + 1) + 3): %d\n",*(*(array+1)+3));    //第二行数组第四个元素的值
    
}