#include <stdio.h>
#include "max.h"

int main()
{
    int a = 0;
    int b = 0;

    printf("type in a:");
    scanf("%d", &a);
    printf("type in b:");
    scanf("%d", &b);
    printf("the bigger one is %d\n", max(a,b));
    printf("there is a global varibles: %d\n", all);

    return 0;
}