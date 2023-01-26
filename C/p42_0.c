#include<stdio.h>

struct Book                 //声明结构体类型名
{
    char title[128];
    char author[40];
    float price;
    unsigned int date;
    char publisher[40];
};

int main(void)
{
    struct Book book;       //定义结构体变量名

    printf("please input the name of book: ");
    scanf("%s",book.title);
    printf("please input the author of book: ");
    scanf("%s",book.author);
    printf("please input the price of book: ");
    scanf("%f",&book.price);
    printf("please input the date of book: ");
    scanf("%d",&book.date);
    printf("please input the publisher of book: ");
    scanf("%s",book.publisher);
    printf("inputing finished......\n\n");

    printf("NAME: %s\n",book.title);
    printf("AUTHOR: %s\n",book.author);
    printf("PRICE: %.2f\n",book.price);
    printf("DATE: %d\n",book.date);
    printf("PUBLISHER: %s\n",book.publisher);
}