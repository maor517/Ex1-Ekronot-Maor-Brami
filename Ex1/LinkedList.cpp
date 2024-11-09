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


bool sub(LinkedList** l)
{
    if (*l != NULL)
    {
        if ((*l)->next == NULL)
        {
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
            delete secondLast->next;
            secondLast->next = NULL;
        }
        return true;
    }
    return false;
}