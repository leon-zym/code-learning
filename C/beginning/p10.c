#include<stdio.h>
int main()
{
    int a=2,b=3;

    (a=0) && (b=5);             //短路求值，逻辑与逻辑非 仅当在第一个运算数的值无法确定的时候，才会对第二个进行求值。
    printf("a=%d b=%d\n",a,b);

    (a=1) || (b=9);
    printf("a=%d b=%d\n",a,b);
}