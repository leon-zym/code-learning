/*  //version 1.0
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c, word=0;
	while ((c=getchar())!=EOF){
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			putchar(c);
			word=1;
		}
		else if (word==1){
			printf("\n");
			word=0;
		}
	}
	system("pause");
	return 0;
}
*/


    //version 2.0
#include<stdio.h>
#define IN 1
#define out 0
int main()
{
    int c,state;
	while((c=getchar())!=EOF)
	{
		if(c==' ' || c=='\t')
			printf("\n");
		else
		{
			putchar(c);
		}
		
	}
}