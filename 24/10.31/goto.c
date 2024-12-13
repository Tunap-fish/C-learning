#include <stdio.h>

int main()
{
    int x;
    int one, two, five;

    scanf("%d", &x);
    for( one = 1; one < x*10; one++)
    {
        for(two = 1; two < x*5; two++)
        {
            for(five = 1; five < x*2; five++)
            {
                if(one * 0.1 + two * 0.2 + five * 0.5 == x)
                {
                    printf("%done,%dtwo,%dfive\n", one, two, five);
                    goto out;
                }
            }
        }
    }
out:
    return 0;

}
//或者可以采用设变量exit，if成功时exit=1，在外面两个循环里在两个exit的判断，成功都是break//