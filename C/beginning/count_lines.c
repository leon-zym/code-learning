/*  //version 1.0
#include<stdio.h>
int main()
{
    int c,nl;
    nl=0;
    while ((c=getchar())!=EOF)
    {
        if (c=='\n')
        {
            ++nl;
            printf("%d\n",nl);
        }
    }
}
*/


    //version 2.0
#include<stdio.h>
int main()
{
    int c,nl;
    nl=0;
    c=getchar();
    while(c!=EOF)
    {
        if(c=='\n')
        {
            ++nl;
            printf("%d\n",nl);
        }
        c=getchar();
    }
}
