#include <iostream>

// a linked list node that contains a positive integer value and a pointer to the next node
typedef struct linkedList
{
	int data;
	struct linkedList* nextnode;
} linkedList;

// adds a new node with the given value to the head of the linked list
void addhead(linkedList** head, int value)
{
	linkedList* newNode = new linkedList;
	newNode->data = value;
	newNode->nextnode = *head;
	*head = newNode;
}
// deletes the head node of the linked list
void delethead(linkedList** head)
{
	if (*head == nullptr)
	{
		return;
	}
	linkedList* temp = *head;
	*head = (*head)->nextnode;
	delete temp;
}