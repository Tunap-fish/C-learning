//数组的集成初始化
//data_type array_name[size (不要求）] = {value1, value2, value3, ...};
//如果出现 int a[5] = {1}; 那么a[0] = 1, a[1] = 0, a[2] = 0, a[3] = 0, a[4] = 0;
//未定义的值都是0
//int a[5] = {[1] = 3};
//a[0] = 0, a[1] = 3, a[2] = 0, a[3] = 0, a[4] = 0;
//给特定的元素赋值
//sizeof(a)/sizeof(a[0]) 可以得到数组的长度
//数组的长度是不能改变的
//不可以把一个数组赋值给另一个数组
//可以采用遍历的方法把一个数组的值赋给另一个数组
//就是用循环

//数组作为参数时
//不能够在参数里写数组的长度
//也不能在函数内部用sizeof（a)/sizeof（a[0]）来得到数组的长度
#include <stdio.h>

int isprime(int x, int  new_prime[], int num);

int main(void)
{
    #define num 100 // const int num = 100;failed
    int prime[num] = {2};
    int cnt;
    int i = 3;

    for (cnt = 1; cnt < num; i++)
    {
        if (isprime(i, prime, cnt))
        {
            prime[cnt++] = i;
        }    
    }
    printf("The first %d prime numbers are:\n", num);
    for(i = 0; i < num; i++)
    {
        printf("%d", prime[i]);
        if ((i+1) % 5 == 0)
        {
            printf("\n");
        } else {
            printf("\t");
        }
    }
    return 0;

}

int isprime(int x, int new_prime[], int new_num)
{
    int reset = 1;
    for (int i = 0; i < new_num; i++)
    {
        if(x % new_prime[i] == 0)
        {
            reset = 0;
            break;
        }
    }
    return reset;
}