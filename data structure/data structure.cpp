#include<iostream>
#include<string>
//#include"SingleLinkedList.h"
//#include"DoubleLinkedList.h"
#include"LinkedQueue.h"

using namespace std;

void main_single_linked_list(int);
void main_double_linked_list(int);
void main_linked_queue(int);

int main() {
	int n;
	cin >> n;
	main_linked_queue(n);
}

/*
void main_single_linked_list(int n) {
	SingleLinkedList S = SingleLinkedList();

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input == "append") {
			int data;
			cin >> data;
			S.append(data);
		}
		else if (input == "insert") {
			int idx;
			int data;
			cin >> idx;
			cin >> data;
			S.insert(idx, data);
		}
		else if (input == "delete") {
			int idx;
			cin >> idx;
			cout << S.remove(idx) << endl;
		}
		else if (input == "print") {
			S.print();
		}
		else if (input == "size") {
			cout << S.size()<<endl;
		}
		else if (input == "min") {
			S.min();
		}
	}
}*/
/*
void main_double_linked_list(int n) {
	DoubleLinkedList D = DoubleLinkedList();

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input == "append") {
			int data;
			cin >> data;
			D.append(data);
		}
		else if (input == "insert") {
			int idx;
			int data;
			cin >> idx;
			cin >> data;
			D.insert(idx, data);
		}
		else if (input == "delete") {
			int idx;
			cin >> idx;
			cout << D.remove(idx) << endl;
		}
		else if (input == "print") {
			D.print();
		}
		else if (input == "size") {
			cout << D.size() << endl;
		}
		else if (input == "update") {
			int from, to;
			cin >> from >> to;
			D.update(from, to);
		}
	}
}*/

void main_linked_queue(int n)
{
	LinkedQueue Q = LinkedQueue();
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input == "len") {
			cout << Q.len()<<endl;
		}
		else if (input == "first")
		{
			cout << Q.first()<<endl;
		}
		else if (input == "print")
		{
			Q.print();
		}
		else if (input == "enqueue")
		{
			int data; 
			cin >> data;
			Q.enqueue(data);
		}
		else if (input == "dequeue")
		{
			cout << Q.dequeue()<<endl;
		}
	}
}
