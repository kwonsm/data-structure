#ifndef DOUBLELINKEDLIST_h
#define DOUBLELINKEDLIST_h

#include<iostream>

class Node {
	int data;
	Node* prev;
	Node* next;

	friend class DoubleLinkedList;
};

class DoubleLinkedList
{
public:
	DoubleLinkedList();
	~DoubleLinkedList();

	bool is_empty() const;
	void print() const;
	void update(int from, int to) const;
	int size() const;

	void append(const int& data);
	void insert(const int& idx, const int& data);
	int remove(const int& idx);

private:
	Node* header;
	Node* trailer;
};

#endif // !DOUBLELINKEDLIST_h