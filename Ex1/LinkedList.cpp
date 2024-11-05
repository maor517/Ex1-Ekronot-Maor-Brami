#include "LinkedList.h"
#include <iostream>

void add(LinkedList** l, int val)
{
	LinkedList* new_element = new LinkedList;
	LinkedList* last = *l;
	new_element->value = val;
	new_element->next = NULL;
	if (*l == NULL)
	{
		*l = new_element;
	}
	else
	{
		while(last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_element;
	}
}

void sub(LinkedList** l)
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
            secondLast->next = NULL;
        }
    }
}