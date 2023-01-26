#include<stdio.h>

void func()
{
    extern count;           //extern是告诉编译器这个变量在后面会声明，不要报错
    count++;                //变量未声明先使用了
}

int count = 0;          //若变量先使用后声明，则会报错

int main()
{
    func();
    printf("%d\n",count);
}