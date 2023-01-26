/*
#include<stdio.h>
int main()
{
    int n,i;
    int state=0;
    printf("Please input an integer:");
    scanf("%d",&n);
    if(n<=1)
        state=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            state=1;
    }
    if(state==0)
        printf("This integer is a prime number.");
    else
        printf("This integer is not a prime number.");
    
}
*/


    //version2.0
#include<stdio.h>
int main()
{
    long long n,i;
    int state=0;
    printf("Please input an integer:");
    scanf("%lld",&n);
    if(n<=1)
        state=1;
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                state=1;
                break;      //若已经证实不是素数，则跳出for循环。
            }
        }
    }
    if(state==0)
        printf("This is a prime number.\n");
    else
        printf("This is not a prime number.\n");

    printf("i=%lld\n",i);
}