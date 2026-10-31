#include <iostream>

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	linkedList* head;
} Stack;

void push(Stack* s, unsigned int element)//insert element to the top of the stack
{
	linkedList* newNode = new linkedList;
	newNode->value = element;
	newNode->next = s->head;
	s->head = newNode;
}

int pop(Stack* s) // remove element from the top of the stack
{
	if (s->head == nullptr)
	{
		return -1; // Stack is empty
	}
	int value = s->head->value;
	linkedList* temp = s->head;
	s->head = s->head->next;
	delete temp;
	return;
}

void initStack(Stack* s)
{
	s->head = nullptr;
}

void cleanStack(Stack* s)
{
	while (s->head != nullptr)
	{
		pop(s);
	}
}

bool isEmpty(Stack* s)
{
	return s->head == nullptr;
}

bool isFull(Stack* s)
{
	return false; // Stack has no size limit
}