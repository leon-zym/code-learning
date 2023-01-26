#include<stdio.h>
#include "a.c"      //在其他源文件中定义的函数也具有文件作用域，链接属性为external，在这里引入后即可
#include "b.c"      //可将一个源文件分解成多个
#include "c.c"

int count = 0;      //count变量和a,b,c三个函数都具有文件作用域，其链接属性为external，允许跨文件访问
void a(void);       //若前加static，如static int count；则可以将external链接属性改为internal，且无法被修改回external了
void b(void);       //函数在其他源文件中定义，这里仅声明，也可不用声明
void c(void);

int main(void)
{
    a();
    b();
    c();
    b();
    printf("now, count = %d\n",count);
}