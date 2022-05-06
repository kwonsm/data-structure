#ifndef SINGLELINKEDLIST_h
#define SINGLELINKEDLIST_h
#include <iostream>

using namespace std;

class Node {
	int data;
	Node* next;

	friend class SingleLinkedList;
};

class SingleLinkedList
{
public:
	SingleLinkedList();
	~SingleLinkedList();

	void insert(const int& idx, int data);
	int remove(const int& idx);

	bool is_empty() const;
	int size() const;
	void print() const;
	int min() const;
	void add_front(int data);
	void append(int data);
	int remove_front();
private:
	Node* head;
	Node* tail;
};

#endif