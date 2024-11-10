#include "LinkedList.h"
#include <iostream>
/*
function adds another node to the linked list
input: l - a pointer to a pointer of the linked list, val - the value of the added node in the list
output: none
*/
void add(LinkedList** l, int val)
{
    // creating the node that is added
    LinkedList* newList = new LinkedList;
    newList->value = val;
    newList->next = NULL;
    if (*l == NULL) // if the linked list is empty
    {
        *l = newList;
    }
    else
    {
        LinkedList* last = *l;
        while (last != NULL && last->next != NULL) //getting to the last node
        {
            last = last->next;
        }
        last->next = newList; // adding the node to the list
    }
}

/*
function removes a node to the linked list
input: l - a pointer to a pointer of the linked list
output: the value of the node that is removed, or -1 if there are no nodes to be removed
*/
int sub(LinkedList** l)
{
    if (*l != NULL) // if the list is empty and there are no nodes to be removed
    {
        int lastVal = 0;
        if ((*l)->next == NULL) // if there is only one node in the list
        {
            lastVal = (*l)->value;
            delete* l;
            *l = NULL;
        }
        else
        {
            LinkedList* secondLast = *l;
            while (secondLast->next != NULL && secondLast->next->next != NULL) // travelling to the second to  last node
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