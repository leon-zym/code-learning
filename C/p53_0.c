#include <stdio.h>

struct Test
{
    unsigned int a:1;
    unsigned int b:1;
    unsigned int c:2;       //使用位域来表示结构体成员所占的位数b
};

int main(void)
{
    struct Test test;
    test.a = 0;
    test.b = 1;
    test.c = 2;

    printf("test.a = %d\n",test.a);
    printf("test.b = %d\n",test.b);
    printf("test.c = %d\n",test.c);
    printf("size of test is %d Byte.\n",sizeof(test));
}