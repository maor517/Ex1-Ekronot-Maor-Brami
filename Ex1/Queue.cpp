#include <iostream>
#include "Queue.h"

/*
function initiallizes the queue
input: q - a pointer to a queue, size - the size of the queue
output: none
*/
void initQueue(Queue* q, unsigned int size)
{
	int i = 0;
	q->currentSize = 0;
	q->maxSize = size;
	q->elements = new int[size];
	for (i = 0; i < size; i++)
	{
		q->elements[i] = 0;
	}
}

/*
function deletes the memory of the queue
input: q - a pointer to a queue
output: none
*/
void cleanQueue(Queue* q)
{
	q->currentSize = 0;
	delete[] q->elements;
	q->maxSize = 0;
}

/*
function adds an element to queue
input: q - a pointer to a queue, newValue - the value of the new element
output: none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (q->currentSize < q->maxSize)
	{
		q->elements[q->currentSize] = newValue;
		q->currentSize++;
	}
}

/*
function removes an element from the queue
input: q - a pointer to a queue
output: the value of the element removed, or -1 if there is no element to be removed
*/
int dequeue(Queue* q)
{
	if (q->currentSize > 0)
	{
		int i = 0, firstElement;
		firstElement = q->elements[0];
		q->elements[0] = 0;
		for (i = 1; i < q->maxSize; i++)
		{
			q->elements[i - 1] = q->elements[i];
		}
		q->elements[q->maxSize - 1] = 0;
		q->currentSize--;
		return firstElement;
	}
	return -1;
}

/*
function checks if the queue is empty
input: s - a pointer to a queue
output: true if queue is empty, or false if it is not
*/
bool isEmpty(Queue* s)
{
	return s->currentSize == 0;
}

/*
function checks if the queue i
input: s - a pointer to a queue
output: true if the queue is full, or false if it is not
*/
bool isFull(Queue* s)
{
	return s->currentSize = s->maxSize;
}