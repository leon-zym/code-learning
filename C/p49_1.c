#include <stdio.h>
#include <stdlib.h>

typedef struct Date
{
    int year;
    int month;
    int day;
} DATE, *PDATE;             //typedef替换结构体类型名为DATE，且声明一个此结构体类型的指针为PDARE

int main(void)
{
    DATE *date;
    date = (PDATE)malloc(sizeof(DATE));

    date->year = 2021;
    date->month = 7;
    date->day = 31;

    printf("date is %d-%d-%d\n",date->year,date->month,date->day);
}