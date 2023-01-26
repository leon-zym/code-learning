#include<stdio.h>
int main()
{
   int number = 1234;
    int *p = &number;
    void *test = p;
    
    printf("*p = %d\n",*p);
    //printf("*test = %d\n",*test);       //此句错误，void指针不能直接解引用
    printf("*test = %d\n",*(int *)test);    //(int *)可以先强制转换，然后再解引用
}