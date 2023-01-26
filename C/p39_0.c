#include<stdio.h>
#include<stdlib.h>

int global_uninit_var;
int global_init_var1 = 520;
int global_init_var2 = 880;

void func(void);

void func(void)
{
    ;
}

int main(void)
{
    int local_var1;
    int local_var2;

    static int static_uninit_var;
    static int static_init_var = 456;
    char *str1 = "I love FishC.com!";
    char *str2 = "You are right.";

    int *malloc_var = (int *)malloc(sizeof(int));
                                                                            //1——6号位内存地址由低到高
    printf("address of func -> %p\n",func);                                 //text代码段，1号位
    printf("address of str1 -> %p\n",str1);                                 //text代码段，2号位
    printf("address of str2 -> %p\n",str2);                                 //text代码段，2号位
    printf("address of global_init_var1 -> %p\n",&global_init_var1);        //data数据段，3号位
    printf("address of global_init_var2 -> %p\n",&global_init_var2);        //data数据段，3号位
    printf("address of static_init_var -> %p\n",&static_init_var);          //data数据段，3号位
    printf("address of static_uninit_var -> %p\n",&static_uninit_var);      //BSS段，4号位
    printf("address of global_uninit_var -> %p\n",&global_uninit_var);      //BSS段，4号位
    printf("address of malloc_var -> %p\n",malloc_var);                     //堆，5号位
    printf("address of local_var1 -> %p\n",&local_var1);                    //栈，6号位
    printf("address of local_var2 -> %p\n",&local_var2);                    //栈，6号位

    return 0;
}