#ifndef LINKEDQUEUE_h
#define LINKEDQUEUE_h

#include<iostream>

class Node {
	int data;
	Node* next;

	friend class LinkedQueue;
};


class LinkedQueue
{
public:
	LinkedQueue();
	~LinkedQueue();

	int len() const;
	bool is_empty() const;
	int first() const;
	void print() const;

	int dequeue();
	void enqueue(int data);

private:
	Node* head;
	Node* tail;
	int size;
};


#endif