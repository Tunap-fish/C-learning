//链表的每个单元叫节点
//由数据后面加上指针组成

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
    List list1;
    list1.head = NULL;//定义一个头结点
    int number;

    do
    {
        scanf("%d", &number);
        if (number != -1)
        {
            add(&list1, number);
        }
    } while (number != -1);
    list_print(&list1);
    //Node *p;
    //for (p = list1.head; p; p = p->next)
    //{
    //    printf("%d\t", p->current_value);
    //}
    //printf("\nEnd!");
    printf("%d\n", list_at(&list1, 3)->current_value);
    printf("type in the number you wish to find: ");
    int x;
    scanf("%d", &x);
    if (isfound(&list1, x))
    {
        printf("we find it!\n");
    } else {
        printf("failed to find it!\n");
    }

    //how to delete
    list_delete(&list1, x);
    list_print(&list1);
    //how to free a list
    list_free(&list1);

    return 0;
}