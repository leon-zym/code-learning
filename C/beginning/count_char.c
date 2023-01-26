/*
#include<stdio.h>
int main()
{
    long nc;
    nc=0;
    while (getchar()!=EOF)
    {
        ++nc;
        printf("%ld\n",nc);
    }
    
}
*/


    //version2.0
#include<stdio.h>
int main()
{
    int n=0;
    printf("Please input your characters\n");
    while((getchar())!='\n')
        ++n;
    printf("The numbers of characters are %d\n",n);
}