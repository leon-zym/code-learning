#include<stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;       //结构体嵌套
    char publisher[40];
}book = {                   //声明完了直接定义并且初始化
    "外国建筑史",
    "欧阳昉昕",
    32,
    {2021, 3, 1},
    "机械出版社"
};

int main(void)
{
    printf("title: %s\n",book.title);
    printf("author: %s\n", book.author);
    printf("price %.2f\n", book.price);
    printf("date: %d-%d-%d\n", book.date.year, book.date.month, book.date.day);     //有多少结构就有多少“.”逐级深入
    printf("publisher: %s\n", book.publisher);

    return 0;
}