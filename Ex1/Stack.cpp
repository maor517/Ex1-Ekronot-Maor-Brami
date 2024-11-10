#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

/*
function initiallizes the stack
input: s - a pointer to a stack
output: none
*/
void initStack(Stack* s)
{
	s->list = new LinkedList;
	s->list->next = NULL;
	s->count = 0;
}

/*
function deletes the memmory of the stack
input: s - a pointer to a stack
output: none
*/
void cleanStack(Stack* s)
{
	while (s->count > 0)
	{
		sub(&(s->list));
		s->count--;
	}
}

/*
function adds a node to the stack
input: s - a pointer to a stack, element - the value of the new node
output: none
*/
void push(Stack* s, unsigned int element)
{
	add(&s->list, element);
	s->count++;
}

/*
function removes a node from the stack
input: s - a pointer to a stack
output: the value of the node delete, or -1 if there are no nodes
*/
int pop(Stack* s)
{
	int poppedVal = sub(&(s->list));
	if (poppedVal != -1) // if there was node removed
	{
		s->count--;
	}
	return poppedVal;
}

/*
function checks if the stack is empty
input: s - a pointer to a stack
output: true if the stack is empty, or false if it is not
*/
bool isEmpty(Stack* s)
{
	return s->count == 0;
}