//break 是用来跳出循环，而continue是跳过本次循环之后的语句//
#include <stdio.h>

int main()
{
    int a, i, test;

    scanf("%d", &a);

    test = 1;

    for(i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            test = 0;
            continue;
        }
        printf("%d\n", i);
    }
    if( test == 1)
    {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}