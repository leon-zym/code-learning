#include<stdio.h>

int main()
{
    char str1[20] = "hello world!";
    int str2[] = {123,124,125};
    int *p = str2;

    printf("the sentence is %s\n",str1);

    printf("the addr of str is %p\n",str1);     //数组的地址就是数组第一个元素的地址
    printf("the addr of str is %p\n",&str1[0]);

    printf("*p1 -> %d, *p2 -> %d, *p3 = %d\n",*p,*(p+1),*(p+2));        //对指针加减运算，就是对指针指向的元素向前向后n个元素
}