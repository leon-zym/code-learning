#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    struct tm *p;
    time_t t;

    time(&t);
    p = localtime(&t);

    if((fp = fopen("date.txt","w")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "%d-%d-%d", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday);
    fclose(fp);

    int year, month, day;

    if((fp = fopen("date.txt","r")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    fscanf(fp, "%d-%d-%d", &year, &month, &day);
    printf("it's %d-%d-%d today!\n", year, month, day);
    fclose (fp);
}