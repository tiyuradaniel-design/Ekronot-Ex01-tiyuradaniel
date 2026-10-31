#include "Queue.h"
#include <iostream>

typedef struct Queue
{
	int maxSize; // maximum number of elements in the queue
	int* arr; // array of integers to hold the elements in the queue
	int last; // index of the last element in the queue
} Queue;

void initQueue(Queue* q, unsigned int size) 
{
	q->maxSize = size;
	q->arr = new int[size];
	q->last = -1;
}

void cleanQueue(Queue* q) 
{
	delete[] q->arr;
	q->arr = nullptr;
	q->last = -1;
	q->maxSize = 0;
}

void enqueue(Queue* q, unsigned int newValue) 
{
	if (isFull(q)) 
	{
		std::cerr << "Queue is full!" << std::endl;
		return;
	}
	q->last++;
	q->arr[q->last] = newValue;
}

int dequeue(Queue* q)
{
	if (isEmpty(q)) 
	{
		std::cerr << "Queue is empty!" << std::endl;
		return -1;
	}
	int value = q->arr[0];
	for (int i = 0; i < q->last; i++) 
	{
		q->arr[i] = q->arr[i + 1];
	}
	q->last--;
	return value;
}

bool isEmpty(Queue* q) 
{
	return q->last == -1;
}

bool isFull(Queue* q) 
{
	return q->last == q->maxSize - 1;
}