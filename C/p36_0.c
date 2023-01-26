#include<stdio.h>

void quick_sort(int array[], int left, int right);

void quick_sort(int array[], int left, int right)
{
    int i = left, j = right;
    int temp, pivot;
    pivot = array[(left + right) / 2];

    while(i <= j)
    {
        while(array[i] < pivot)     //从左向右找到大于等于基准点的元素
        {
            i++;
        }
        while(array[j] > pivot)     //从右向左找到相遇等于基准点的元素
        {
            j--;
        }
        if(i <= j)
        {
            temp = array[i];            //互换元素位置
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }

    if(j > left)
    {
        quick_sort(array, left, j);
    }
    if(i < right)
    {
        quick_sort(array, i, right);
    }

}

int main(void)
{
    int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
    int i, length;

    length = sizeof(array) / sizeof(array[0]);
    quick_sort(array, 0, length-1);
    printf("after sort, the array is:\n");
    for(i = 0; i < length; i++)
    {
        printf("%d ",array[i]);
    }
    putchar('\n');
}