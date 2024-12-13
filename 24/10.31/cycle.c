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
            break;
        }
    }
    if( test == 1)
    {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}