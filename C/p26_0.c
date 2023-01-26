#include<stdio.h>
int main()
{
    int num = 123;
    int *p = &num;
    int **pplus = &p;       //指向指针的指针

    printf("*p: %d\n",*p);
    printf("**p: %d\n",**pplus);
    printf("&num: %p\n",&num);
    printf("p: %p\n",p);
    printf("pplus: %p\n",pplus);
}