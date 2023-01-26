#include<stdio.h>
#define NUM 10

int main()
{
    float a[NUM];
    float sum;
    int i;
    for(i=0;i<NUM;i++)
    {
        printf("Please input NO.%d studend's scores:",i+1);
        scanf("%f",&a[i]);
        sum += a[i];
    }
    printf("Collection is over...The average score is:%.2f",sum/NUM);
    return 0;
}