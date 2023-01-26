#include<stdio.h>

char *getword(char);            //指针函数，返回值为地址

char *getword(char c)
{
    switch(c)
    {
        case 'A': return "Apple";       //返回字符串第一个字符的地址，字符串本身额外存储，不属于局部变量
        case 'B': return "Banana";      //warning：不要返回局部变量的地址！！
        case 'C': return "Cat";
        case 'D': return "Dog";
        default : return "None";
    }
}

int main()
{
    char input;
    
    printf("please input a character: ");
    scanf("%c",&input);
    printf("the word is %s\n",getword(input));
    return 0;
}