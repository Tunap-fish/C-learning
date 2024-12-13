#include <stdio.h>
#include <math.h>

int main()
{
    int x, i, t;
    int y = 1;
    
    scanf("%d", &x);
    t = x;
    i = 1;
    while (x > 9)
    {
        i++;
        x /= 10;
    }
    y = pow(10, i);//优化计算
    printf("%d %d %d %d\n", i, x, y, t);
    for ( i; i != 0; i = i-1)
    {
        x = t / y;
        printf("%d", x);
        if ( t >= 10 )
        {
            printf(" ");
        }
        t = t % y;
        y /= 10;
        
    }

    return 0;

}