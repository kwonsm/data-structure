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
	trailer->prev = cur;
	cur->next = trailer;
	cur->prev = trailer->prev;
	print();
}

void DoubleLinkedList::insert(const int& idx, const int& data)
{
	Node* new_node = new Node;
	new_node->data = data;
	Node* cur = header->next;
	Node* pre = NULL;
	
	if (idx == 0)
	{
		if (is_empty())
		{
			header->next = trailer->prev = new_node;
			new_node->next = trailer;
			new_node->prev = header;
		}
		else
		{
			new_node->prev = header;
			new_node->next = header->next;
			header->next = new_node->next->prev = new_node;
		}
		print();
	}
	else if (idx<0 || size()<idx)
	{
		std::cout << "index error!" << std::endl;
		delete new_node;
	}
	else if (idx == size())
	{
		append(data);
		delete new_node;
	}
	else 
	{
		for (size_t i = 0; i < idx; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		new_node->next = cur;
		new_node->prev = pre;
		pre->next =  new_node;
		cur->prev = new_node;
		print();
	}
}

int DoubleLinkedList::remove(const int& idx)
{
	Node* del = header->next;
	Node* next = nullptr;
	Node* pre = nullptr;
	int del_data;

	if (is_empty()) {
		std::cout << "empty";
		return -1;
	}
	else if (size() == 1)
	{
		del_data = del->data;
		delete del;
		header->next = trailer;
		trailer->prev = header;
		return del_data;
	}
	if(idx<0 || size()<=idx)
	{
		std::cout << "index error" << std::endl;
		return -1;
	}
	else
	{
		for (size_t i = 0; i < idx; i++)
		{
			pre = del;
			del = del->next;
		}
		next = del->next;

		pre->next = next;
		next->prev = pre;

		del_data = del->data;
		delete del;
	}
	return del_data;
}
