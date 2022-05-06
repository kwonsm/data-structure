#include "DoubleLinkedList.h"

DoubleLinkedList::DoubleLinkedList()
{
	header = new Node;
	trailer = new Node;

	header->next = trailer;
	trailer->prev = header;
}

DoubleLinkedList::~DoubleLinkedList()
{
	while (!is_empty()) remove(0);
	delete header;
	delete trailer;
}

bool DoubleLinkedList::is_empty() const
{
	return (header->next == trailer);
}

void DoubleLinkedList::print() const
{
	Node* print_node = header->next;
	if (is_empty()) std::cout << "empty" << std::endl;
	else
	{
		while (print_node->next != trailer) {
			std::cout << print_node->data << " ";
			print_node = print_node->next;
		}
		std::cout << print_node->data << std::endl;
	}
}

void DoubleLinkedList::update(int from, int to) const
{
	Node* cur_node = header->next;
	bool is_change = true;

	for (int idx = 0; idx < size(); idx++)
	{
		if (cur_node->data == from) { 
			cur_node->data = to;
			is_change = false;
		}
		cur_node = cur_node->next;
	}

	if (is_change) std::cout << "not found!" << std::endl;
	else print();
}

int DoubleLinkedList::size() const
{
	int size = 0;

	Node* cur = header;
	while (cur->next != trailer) {
		size++;
		cur = cur->next;
	}
	return size;
}

void DoubleLinkedList::append(const int& data)
{
	Node* cur = new Node;
	cur->data = data;

	trailer->prev->next = cur;
	cur->prev = trailer->prev;
	trailer->prev = cur;
	cur->next = trailer;
	print();
}

void DoubleLinkedList::insert(const int& idx, const int& data)
{
}

int DoubleLinkedList::remove(const int& idx)
{
	return 0;
}
