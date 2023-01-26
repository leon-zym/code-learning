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
}book1, book2;

struct Book getinput(struct Book book)
{
    printf("please input the name of book: ");
    scanf("%s",book.title);
    printf("please input the author of book: ");
    scanf("%s",book.author);
    printf("please input the price of book: ");
    scanf("%f",&book.price);
    printf("please input the date of book: ");
    scanf("%d-%d-%d",&book.date.year, &book.date.month, &book.date.day);
    printf("please input the publisher of book: ");
    scanf("%s",book.publisher);
    printf("inputing finished......\n\n");

    return book;
}

int main(void)
{
    book1 = getinput(book1);

    printf("NAME: %s\n",book1.title);
    printf("AUTHOR: %s\n",book1.author);
    printf("PRICE: %.2f\n",book1.price);
    printf("DATE: %d-%d-%d\n",book1.date.year, book1.date.month, book1.date.day);
    printf("PUBLISHER: %s\n",book1.publisher);

    return 0;
}