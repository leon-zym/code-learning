/*
#include<stdio.h>
int main()
{
    printf("整型输出：%d\n",1+2.0);     //类型转换，精度由高变低出错。
    printf("浮点型输出：%f\n",1+2.0);
}
*/

#include<stdio.h>
int main()
{
    printf("integer:%d\n",1+(int)2.0);      //但可以强制转换，会舍弃小数部分。
    printf("float:%f\n",1+2.0);
}