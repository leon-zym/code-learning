#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]="This is an array practice program.";       //定义时指定数组长度。
    char b[]="This is a new array.";
    char c[50];
    int i,n;

    n=strlen(a);
    printf("strlen = %d\n\n",n);

    strcpy(a,b);
    printf("%s\n%s\n\n",a,b);

    strncpy(c,a,7);
    printf("%s\n\n",c);

    strcat(a,b);        //用strcat函数时，需要定义目标数组的长度，否则报错。
    printf("%s\n\n",a);
}