#include <stdio.h>
int main()
{
    char *books[] =         //定义一个指针数组，包含多个字符串
    {
        "《算法导论》",
        "《C程序设计语言》",
        "《数据结构与算法分析》",
        "《大话数据结构》",
        "《C Primer Plus》"
    };
    char **database[3];
    char **programminglanguage[2];      //定义两个指向指针的指针数组
    int i,j;

    database[0] = &books[0];        //赋值号两边同级别，都是地址的地址
    database[1] = &books[2];
    database[2] = &books[3];
    programminglanguage[0] = &books[1];
    programminglanguage[1] = &books[4];

    for(i=0;i<3;i++)
    printf("books of database have: %s\n",*database[i]);        //字符串本身就是一个指针，所以只需要解引用一次

    for(j=0;j<2;j++)
    printf("books of programming language have: %s\n",*programminglanguage[j]);
}