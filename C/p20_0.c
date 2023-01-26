#include<stdio.h>
int main()
{
    int i,j;
    int a[3][6]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8};
    int b[4][5]={{1,2,3,4,5},{6,7,8,9,0,},{1,2,3,4,5}};
    int c[3][4]={       //对于二维数组更加直观。
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6}
    };

    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)        //用循环嵌套访问二维数组。
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d\t",c[j][i]);     //矩阵的转制，就是把i，j取值范围互换后再把i，j互换位置。
            }
            printf("\n");
        }
        printf("\n");
    
}