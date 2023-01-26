#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int main(void)
{
    FILE *fp;
    char buffer[MAX];

    if ((fp = fopen("hello.txt","w")) == NULL)
    {
        printf("文件打开失败！\n");
        exit (EXIT_FAILURE);
    }

    fputs("line one: hello world!\n", fp);
    fputs("line two: hello FishC!\n", fp);
    fputs("line three: hello Leon!", fp);

    fclose(fp);
    
    if((fp = fopen("hello.txt","r")) == NULL)
    {
        printf("文件打开失败！\n");
        exit (EXIT_FAILURE);
    }

    while(!feof(fp))
    {
        fgets(buffer, MAX, fp);
        printf("%s",buffer);
    }
}