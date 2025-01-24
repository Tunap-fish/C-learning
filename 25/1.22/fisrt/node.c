#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void add(Node** phead, int value)
{
    Node *p = (Node*)malloc(sizeof(Node));
    p->current_value = value;
    Node *last = *phead;
    if (last != NULL)
    {
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = p;
    } else {
        *phead = p;
    }
}