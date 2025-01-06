//send array to function
//what you put into the function is a pointer to the first element of the array
//函数参数表里的数组名，实际上是一个指向数组第一个元素的指针
//但是可以用数组运算符[]来进行运算

#include <stdio.h>

void max_min(int a[], int total_varibles, int *max, int *min);

int main()
{
    int a[] = {24, 534, 6745, 3948, 5348, 1024, 2394, 1834, 1246, 29374, 19275};
    int max, min;

    printf("main sizeof(a) = %lu\n", sizeof(a));
    printf("main sizeof(a[0]) = %lu\n", sizeof(a[0]));
    max_min(a, sizeof(a)/sizeof(a[0]), &max, &min);
    printf("max = %d, min = %d\n", max, min);

    return 0;
}

void max_min(int a[], int total_variables, int *max, int *min)//a[] is a pointer to the first element of the array
//therfore, a[] is the same as *a
//we can also write: int *a to replace int a[], then there is no error occurs
{
    printf("a = %p\n", a);
    printf("max_min sizeof(a) = %lu\n", sizeof(a));
    *max = a[0];
    *min = a[0];
    
    for(int i = 1; i < total_variables; i++)
    {
        if(a[i] > *max)
        {
            *max = a[i];
        } else if(a[i] < *min)
        {
            *min = a[i];
        }
    }
}

//actually, array is a special kind of pointer
//int a[]; int *p = a;
//a == &a[0]
//what's more, "[]" symbol can also be used in pointer
//数组变量是const的指针，因此不能被赋值
//int a[] <==> int *const a =......
