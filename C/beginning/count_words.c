/*  //version 1.0
#include<stdio.h>
#define OUT 0
#define IN 1

int main()
{
    int c,nl,nw,nc,state;
    nc=nl=nw=0;
    state=OUT;
    while ((c=getchar())!=EOF)
    {
        ++nc;
        if(c=='\n')
            ++nl;
        if(c==' ' || c=='\n' || c=='\t')
            state=OUT;
        else if(state==OUT)
        {
            state=IN;
            ++nw;
        }
        printf("%d %d %d\n",nc,nw,nl);
    }
}
*/


    //version2.0
#include<stdio.h>
#define OUT 0
#define IN 1

int main()
{
    int c,nl,nw,nc,state;
    nc=nl=nw=0;
    state=OUT;
    while ((c=getchar())!=EOF)
    {
        ++nc;
        if(c=='\n')
        {
            ++nl;
            printf("%d %d %d\n",nc,nw,nl);
        }
        if(c==' ' || c=='\n' || c=='\t')
            state=OUT;
        else if(state==OUT)
        {
            state=IN;
            ++nw;
        }
    }
}