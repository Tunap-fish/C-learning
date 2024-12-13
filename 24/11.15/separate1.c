#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d", &x);
    while( x != 0 )
    {
        y = x % 10;
        printf("%d", y);
        if ( x >= 10 )
        {
            printf(" ");
        }
        x /= 10;
    }

    return 0;
}