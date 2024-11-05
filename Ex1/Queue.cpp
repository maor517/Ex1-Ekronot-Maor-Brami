#include <iostream>
#include "Queue.h"

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

void cleanQueue(Queue* q)
{
	q->currentSize = 0;
	delete[] q->elements;
	q->maxSize = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (q->currentSize < q->maxSize)
	{
		q->elements[q->currentSize] = newValue;
		q->currentSize++;
	}
}

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

bool isEmpty(Queue* s)
{
	return s->currentSize == 0;
}

bool isFull(Queue* s)
{
	return s->currentSize = s->maxSize;
}