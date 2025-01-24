#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void add(List* pList, int value)
{
    Node *p = (Node*)malloc(sizeof(Node));
    p->current_value = value;
    p->next = NULL;
    Node *last = pList->head;
    if (pList->head != NULL)
    {
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = p;
    } else {
        pList->head = p;
    }
}

void list_print(List* pList)
{
    Node *p;
    for (p = pList->head; p; p = p->next)
    {
        printf("%d\t", p->current_value);
    }
    printf("\n");
}

Node* list_at(List* pList, int index)
{
    Node *p = pList->head;
    for (int cnt = 1; cnt < index; cnt++)
    {
        p = p->next;
    }
    return p;
}//Node 的编号从0开始

int isfound(List* pList, int aim_value)
{
    Node *p;
    int rst = 0;
    for (p = pList->head; p; p = p->next)
    {
        if (aim_value == p->current_value)
        {
            rst = 1;
            break;
        }
    }
    return rst;
}

//delete a node
void list_delete(List* pList, int aim_value)
{
    Node *p, *q;
    for(q = NULL, p = pList->head; p; q = p, p = p->next)
    {
        if (p->current_value == aim_value) {
            if (q) {
                q->next = p->next;
            } else {
                pList->head = p->next;
            }
            free(p);
            break;
        } 
    }
}

//delete a list
void list_free(List* pList)
{
    Node *p;
    Node *q;

    for (p = pList->head; p; p = q)
    {
        q = p->next;
        free(p);
    }
}