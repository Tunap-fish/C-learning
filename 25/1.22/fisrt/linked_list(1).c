//链表的每个单元叫节点
//由数据后面加上指针组成

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
    Node* head = NULL;//定义一个头结点
    int number;

    do
    {
        scanf("%d", &number);
        if (number != -1)
        {
            add(&head, number);
        }
    } while (number != -1);
    
    return 0;
}