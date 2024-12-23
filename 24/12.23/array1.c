//define an array
//data_type array_name[size];
//for example, int a[5];
//[]里的叫做下标或索引
//下标从0开始
//一直到size-1
//超出size范围会出现错误
#include <stdio.h>

int main()
{
    int num[10];
    int sum = 0;
    int count = 0;
    int x;

    scanf("%d", &x);
    while( x != -1)
    {
        num[count] = x;
        sum += num[count];
        count++;
        scanf("%d", &x);
    }
    printf("The sum is %d\n", sum);
    double average = sum/count;
    printf("The average is %f\n", average);
    while(count > 0)
    {
        count--;
        if (num[count] > average)
        {
            printf("%d\n", num[count]);
        }
    }

    return 0;



}