#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct LinkedList
{
	int value;
	LinkedList* next;
} LinkedList;
void add(LinkedList** l, int val);
int sub(LinkedList** l);
#endif /* LINKEDLIST_H */