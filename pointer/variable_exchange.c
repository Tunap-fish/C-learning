//now we can use the variable_change.c file to exchange the value of the variable using function

#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 10;
    int b = 20;
    printf("before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after swap: a = %d, b = %d\n", a, b);
    
    return 0;
}

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}