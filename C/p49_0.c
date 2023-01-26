#include<stdio.h>

typedef int integer;        //用typedef替换关键字

int main(void)
{
    int a = 999;
    integer b = 888;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}