#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// a linked list node that contains a positive integer value and a pointer to the next node
typedef struct linkedList
{
	int data;
	struct linkedList* nextnode;
} linkedList;

// adds a new node with the given value to the head of the linked list
void addhead(linkedList** head, int value);
// deletes the head node of the linked list
void delethead(linkedList** head);

#endif // LINKEDLIST_H