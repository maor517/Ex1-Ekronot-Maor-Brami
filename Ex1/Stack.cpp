#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

void initStack(Stack* s)
{
	s->list = new LinkedList;
	s->list->next = NULL;
	s->count = 0;
}

void cleanStack(Stack* s)
{
	while (s->count > 0)
	{
		sub(&(s->list));
		s->count--;
	}
}

void push(Stack* s, unsigned int element)
{
	add(&s->list, element);
	s->count++;
}

int pop(Stack* s)
{
	int poppedVal = sub(&(s->list));
	if (poppedVal != -1)
	{
		s->count--;
	}
	return poppedVal;
}

bool isEmpty(Stack* s)
{
	return s->count == 0;
}