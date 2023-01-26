#include<stdio.h>
int main()
{
    int *p1;
    int *p2 = NULL;
    printf("*p1 = %d",*p1);     //野指针，随机
    printf("*p2 = %d",*p2);     //空指针，会报错，便于调试
}