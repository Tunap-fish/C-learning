//if pointer is const,the value of the pointer can't be changed
//for example:
//int * const p = &i;
//p = &j; //error
//p++; //error
//p can't be changed
//but the value inside the address can be changed
//*p = 20;
//p这个地址永远无法改变

//if the value inside the address is const, the value can't be changed
//for example:
//const int *p = &i; //or int const *p = &i;
//p = &j; //ok
//p++; //ok
//*p =20; //error
//the value inside the address can't be changed
//i本身不是const，可以被改变，但是*p不能被改变

#include <stdio.h>

int main()
{
    int i = 10;
    int * const p = &i;
    int j = 20;
    //p = &j; //error
    int const *q = &i;
    //*q = j; //error
    printf("&i = %p, &j = %p\n", &i, &j);
    printf("before changing: p = q = %p, *p = %d, *q = %d, i = %d, j = %d\n", p, *p, *q, i, j);
    q = &j;
    printf("after first changing: p = %p, q = %p, *p = %d, *q = %d, i = %d, j = %d\n", p, q, *p, *q, i, j);
    *p = j;
    printf("after second changing: p = %p, q = %p, *p = %d, *q = %d, i = %d, j = %d\n", p, q, *p, *q, i, j);

    return 0;
}
