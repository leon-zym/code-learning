#include<stdio.h>
int main()
{
    const float pi = 3.14;      //const定义的变量值无法被修改，近似与于常量
    float num = 9.999;
    const float *p = &num;     //指向常量的指针，可以修改其指向的元素（常量或变量），但无法修改其指向的元素的值
    float * const r = &num;     //常量指针，可以修改其指向元素的值，但无法修改其指向的元素

    printf("pi = %f\n",pi);
    //pi = 3.14159;       //尝试修改会报错

    printf("*p = %f\n",*p);
    //*p = 8.888;       //无法修改，报错
    p = &pi;        //可以修改

    printf("*r = %f\n",*r);
    *r = 8.888;
    printf("*r = %f\n",*r);     //可以修改
    //r = &pi;        //无法修改，报错

}