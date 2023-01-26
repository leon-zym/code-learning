#include<stdio.h>
#include<stdarg.h>

int sum(int n,...);         //...表示参数个数不确定

int sum(int n,...)
{
    int i,sum = 0;

    va_list vap;            //可变参数，variable argument，这节不会！
    va_start(vap,n);
    for(i = 0;i < n;i++)
    {
        sum += va_arg(vap,int);
    }
    va_end(vap);

    return sum;
}

int main()
{
    int result;
    result = sum(3,1,2,3);
    printf("result = %d\n",result);
    return 0;
}