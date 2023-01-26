#include<stdio.h>

struct Book
{
    int x, y;
}book1, book2;

int main(void)
{
    book1.x = 3;
    book1.y = 5;
    book2 = book1;      //同一种结构体类型的变量可以赋值；
    printf("x = %d, y = %d\n",book2.x, book2.y);
}