#include <stdio.h>
//但是没有办法处理像700，1000这样的数
int main()
{
    int x, y, t;

    scanf("%d", &t);
    while( t > 0 )
    {
        x = t % 10 + x * 10;
        t = t / 10;
    }
    printf("%d\n", x);
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