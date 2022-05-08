#include "LinkedQueue.h"

LinkedQueue::LinkedQueue()
{
	head = new Node;
	tail = new Node;
	size = 0;

	head = nullptr;
	tail = nullptr;
}

LinkedQueue::~LinkedQueue()
{
	while (!is_empty()) dequeue();
	delete head;
	delete tail;
}

int LinkedQueue::len() const
{
	return size;
}

bool LinkedQueue::is_empty() const
{
	return (size == 0);
}

int LinkedQueue::first() const
{
	if (is_empty()) {
		std::cout << "empty" << std::endl;
		return -1;
	}
	return head->data;
}

void LinkedQueue::print() const
{
	Node* node = head;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << node->data << " ";
		node = node->next;
	}
	if (is_empty()) std::cout << "empty";
	std::cout << std::endl;

}

int LinkedQueue::dequeue()
{
	if (is_empty()) {
		std::cout << "empty" << std::endl;
		return -1;
	}
	Node* old = head;
	int old_data = old->data;
	size--;

	if (is_empty()) {
		head = nullptr;
		tail = nullptr;
	}
	else head = head->next;
	
	delete old;
	return old_data;
}

void LinkedQueue::enqueue(int data)
{
	Node* node = new Node;
	node->data = data;
	if (is_empty()) {
		head = node;
		tail = node;
	}
	else
	{
		tail->next = node;
		tail = node;
	}
	size++;
}
