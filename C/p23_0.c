/*
#include<stdio.h>

int main()
{
    char str[] = "visual studio code";
    char *pstr = str;
    int count = 0;

    while (*pstr++ != '\0')     //数组名只是一个地址，是右值不能改变不能加减操作。所以这里用指向数组的指针来作为中间量进行操作
    {
        count++;
    }
    printf("The string has %d characters.\n",count);
          
}
*/

/*
#include<stdio.h>
int main()
{
    char *p[3] = {                       //指针数组，它是一个数组，数组中每个元素存放一个指针
        "visual studio code",
        "fishc.com",
        "the c programming language"
    };                                  //这里三个字符串单独存储，数组里是三个字符串的地址
    int i;

    for ( i = 0; i < 3; i++)
    {
        printf("%s\n",p[i]);    //这里p[i]就是三个字符串的地址了，如果写*p[i]就成了地址的地址。前面%s会根据字符串的地址将整个字符串输出
    }
    
}
*/


#include<stdio.h>
int main()
{
    int str[5] = {1,2,3,4,5};
    int (*p)[5] = &str;         //数组指针，指向整个数组的指针。如果直接写str，则是数组第一个元素的地址。&str才是整个数组的地址，
    int i;                      //实际上，&str就是数组第一个元素地址的地址，套娃

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*(*p+i));     //因为前面定义的数组指针指向的是数组第一个元素地址的地址，所以这里内部的*p是取出数组第一
    }                               //个元素的地址，再进行加减i操作，最后外部的*符号是取出每个地址对应元素的值
    
}