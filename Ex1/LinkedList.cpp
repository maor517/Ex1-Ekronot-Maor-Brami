#include "LinkedList.h"
#include <iostream>
void add(LinkedList** l, int val)
{
    LinkedList* newList = new LinkedList;
    newList->value = val;
    newList->next = NULL;
    if (*l == NULL)
    {
        *l = newList;
    }
    else
    {
        LinkedList* last = *l;
        while (last != NULL && last->next != NULL)
        {
            last = last->next;
        }
        last->next = newList;
    }
}


int sub(LinkedList** l)
{
    if (*l != NULL)
    {
        int lastVal = 0;
        if ((*l)->next == NULL)
        {
            lastVal = (*l)->value;
            delete* l;
            *l = NULL;
        }
        else
        {
            LinkedList* secondLast = *l;
            while (secondLast->next != NULL && secondLast->next->next != NULL)
            {
                secondLast = secondLast->next;
            }
            lastVal = secondLast->next->value;
            delete secondLast->next;
            secondLast->next = NULL;
        }
        return lastVal;
    }
    return -1;
}