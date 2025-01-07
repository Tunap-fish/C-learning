//C99 可以用变量做数组定义的大小
//C99之前，数组的大小必须是常量表达式
//malloc()函数可以动态分配内存
//需使用stdlib.h头文件
//malloc()函数返回的是void*类型，需要强制类型转换
//for example:
//int a[number]; //C99
//a = (int*)malloc(number*sizeof(int));
//同时，需要在使用完之后释放内存
//使用free()函数

//free(NULL)是安全的
//free()函数只能释放动态分配的内存
//因此，定义指针变量时，不要忘记初始化为NULL

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int *a = 0;
    printf("input the nuber of your array: ");
    scanf("%d", &number);
    //int a[100]; //C99
    a = (int*)malloc(number*sizeof(int));//动态分配内存
    //之后可以完全当作一个数组来使用
    printf("number: %d\n", number);

    for(int i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = number - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    free(a);//释放内存

    return 0;

}