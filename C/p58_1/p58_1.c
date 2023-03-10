#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Book
{
    char name[64];
    char author[64];
    char publisher[64];
    struct Date date;
};


int main()
{
    FILE *fp;
    struct Book *book_for_write, *book_for_read;
    
    book_for_write = (struct Book *) malloc(sizeof(struct Book));
    book_for_read = (struct Book *) malloc (sizeof(struct Book));
    if (book_for_write == NULL || book_for_read == NULL)
    {
        printf("内存分配失败！\n");
        exit(EXIT_FAILURE);
    }

    strcpy (book_for_write->name, "《带你学C带你飞》");
    strcpy (book_for_write->author, "小甲鱼");
    strcpy (book_for_write->publisher, "清华大学出版社");
    book_for_write->date.year = 2021;
    book_for_write->date.month = 8;
    book_for_write->date.day = 2;

    if((fp = fopen("file.txt", "w")) == NULL)
    {
        printf("文件打开失败！");
        exit(EXIT_FAILURE);
    }

    fwrite(book_for_write, sizeof(struct Book), 1, fp);
    fclose(fp);

    if((fp = fopen("file.txt", "r")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    fread(book_for_read, sizeof(struct Book), 1, fp);
    printf("书名：%s\n", book_for_read->name);
    printf("作者：%s\n", book_for_read->author);
    printf("出版社：%s\n", book_for_read->publisher);
    printf("日期：%d-%d-%d", book_for_read->date.year, book_for_read->date.month, book_for_read->date.day);

}