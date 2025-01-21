#include <stdio.h>
#include <stdlib.h>
#include "resizable_array.h"

int main()
{
    int i;
    Array a1;
    a1 = array_create(10);
    int cnt = 0;
    
    do
    {
        printf("number %d: ", cnt);
        scanf("%d", array_at(&a1, cnt));
    } while (*array_at(&a1, cnt++) != -1);

    printf("here we will reprint the number you type in!\n");
    for(i = 0; i < cnt; i++)
    {
        printf("number %d: %d\n", i, *array_at(&a1, i));
    }
    array_free(&a1);
    
    return 0;
}