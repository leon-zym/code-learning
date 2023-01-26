#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    if((fp = fopen("test.txt", "r")) == NULL)
    {
        fputs("文件打开失败！\n", stderr);
    }
}