/*
#include<stdio.h>

int main()
{
    int s;
    char g;
    printf("请输入分数：");
    scanf("%d",&s);

    if(s>=90 && s<=100)
        g='A';
    else if(s>=80 && s<90)
        g='B';
    else if(s>=70 && s<80)
        g='C';
    else if(s>=60 && s<70)
        g='D';
    else if(s>=0 && s<60)
        g='U';
    else
        g='W';

    printf("等级为：%c\n",g);
}
*/


    //version 2.0
#include<stdio.h>

int main()
{
    char g;
    printf("请输入等级：");
    scanf("%c",&g);

    switch(g)
    {
        case 'A':printf("你的成绩在90-100分之间\n");break;
        case 'B':printf("你的成绩在80-90分之间\n");break;
        case 'C':printf("你的成绩在70-80分之间\n");break;
        case 'D':printf("你的成绩在60-70分之间\n");break;
        case 'U':printf("你的成绩在60分以下，不及格\n");break;
        default:printf("请输入正确的等级\n");
    }

}