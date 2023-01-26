#include<stdio.h>

int main()
{
    int a,b,c,d;
    int *pa,*pb,*pc;

    printf("please input three integers:");
    scanf("%d%d%d",&a,&b,&c);

    pa=&a;
    pb=&b;
    pc=&c;

    if (a>b)
    {
        d=a;
        a=b;
        b=d;
    }
    if (a>c)
    {
        d=a;
        a=c;
        c=d;
    }
    if (b>c)
    {
        d=b;
        b=c;
        c=d;
    }
    
    printf("%d <= %d <= %d\n",*pa,*pb,*pc);
    
}