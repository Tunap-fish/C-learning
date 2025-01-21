//使用特殊的函数库
//Array array_create(int init_size);//创建一个数组
//void array_free(Array *a);//把这个数组给回收了
//int array_size(const Array *a);//现在这个数组有多少个单元可以用
//int* array_at(Array *a,int index);//获得或访问数组中的某个单元，可读可写
//void array_inflate(Array *a, int more_size);//扩展数组

//先定义一个array
//typedef struct {
//int *array;
//int size;
//} Array;

//Array array_create(int init_size)
//{
//Array a;
//a.size = init_size;
//a.array = (int*)malloc(sizeof(int)*init+size);
//return a;
//}

//void array_free(Array *a)
//{
//free(a->array);
//a->array = NULL;//保险
//a->size = 0;//保险
//}

//    这是一种封装
//int array_size(const Array *a)
//{
//return a->size;
//}

//int* array_at(Array *a,int index)
//{
//return &(a->array[index]);
//}

//或者还有其他做法：
//int array_get(Array *a, int index)
//{
//return a->array[index];
//}
//void array_set(Array *a, int index, int value)
//{
//a->array = value;
//}
//这两个函数可以帮忙修改值

//void array_inflate(Array *a, int more_size)
//{
//int *p = (int*)malloc(sizeof(int)*(a->size + more_size));
//int i;
//for (i = 0; i < a->size; i++)
//{
//p->array[i] = a->array[i];
//}//这个循环可以换成一个标准库里的函数 memcpy，void* memcpy(void* dest, const void* src, size_t n);//n: The number of bytes to copy
//free(a->array);
//a->array = p;
//a->size += more_size;
//} 

//中间的for循环可以换成一个标准库里的函数 memcpy，void* memcpy(void* dest, const void* src, size_t n);
//n: The number of bytes to copy

