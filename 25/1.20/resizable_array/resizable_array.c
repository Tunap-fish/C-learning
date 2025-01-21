#include "resizable_array.h"

const int block_size = 10;

Array array_create(int init_size)
{
    Array a;
    a.array = (int*)malloc(sizeof(int)*init_size);
    a.size = init_size;
    return a;
}

void array_free(Array *a)
{
    free(a->array);
    a = NULL;
    a->size = 0;
}

int array_size(Array *a)
{
    return a->size;
}

int* array_at(Array *a, int index)
{
    if (index > a->size-1)
    {
        array_inflate(a, (index/block_size+1)*block_size - a->size);
    }
    return &a->array[index];
}

void array_inflate(Array *a, int more_size)
{
    int i = 0;
    int *p = (int*)malloc(sizeof(int)*(a->size + more_size));
    memcpy(p, a->array, sizeof(int)*(a->size));
    //for ( ; i < a->size; i++)
    //{
    //    p[i] = a->array[i];
    //}
    free(a->array);
    a->array = p;
    a->size += more_size;
}