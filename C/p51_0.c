#include <stdio.h>
#include <string.h>

union Test              //共用体，和结构体类似。但成员拥有同一个内存地址
{
    int i;
    double pi;
    char str[10];
};

int main(void)
{
    union Test test;

    test.i = 999;
    test.pi = 3.14;
    strcpy(test.str, "fishc.com!");                     //分别赋值，但实际后者会覆盖前者的值，只有最后赋值的成员是完整正确的

    printf("address of test.i is %p\n",&test.i);
    printf("address of test.pi is %p\n",&test.pi);
    printf("address of test.str is %p\n",&test.str);    //发现三者的地址是一样的

    printf("test.i = %d\n",test.i);
    printf("test.pi = %.2f\n",test.pi);
    printf("test.str = %s\n",test.str);                 //发现只有最后一个成员打印正确

}