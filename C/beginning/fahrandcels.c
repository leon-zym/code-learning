#include<stdio.h>

/*此程序是个将摄氏度华氏度转换的程序。*/

int main()
{
    int min,max;
    int fahr,cels;
    int step;

    min=0;
    max=300;
    step=20;
    fahr=min;

    while (fahr<=max)
    {
        cels=(fahr-32)*5/9;
        printf("%d\t%d\n",fahr,cels);
        fahr=fahr+step;
    }
}