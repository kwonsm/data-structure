#include<iostream>
#include<string>
#include"SingleLinkedList.h"
#include"DoubleLinkedList.h"

using namespace std;

void main_single_linked_list(int);
void main_double_linked_list(int);
void main_array(int);

int main() {
	int n;
	cin >> n;
	main_double_linked_list(n);
}

void main_single_linked_list(int n) {
	SingleLinkedList L = SingleLinkedList();

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input == "append") {
			int data;
			cin >> data;
			L.append(data);
		}
		else if (input == "insert") {
			int idx;
			int data;
			cin >> idx;
			cin >> data;
			L.insert(idx, data);
		}
		else if (input == "delete") {
			int idx;
			cin >> idx;
			cout << L.remove(idx) << endl;
		}
		else if (input == "print") {
			L.print();
		}
		else if (input == "size") {
			cout << L.size()<<endl;
		}
		else if (input == "min") {
			L.min();
		}
	}
}

void main_double_linked_list(int n) {
	DoubleLinkedList L = DoubleLinkedList();

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input == "append") {
			int data;
			cin >> data;
			L.append(data);
		}
		else if (input == "insert") {
			int idx;
			int data;
			cin >> idx;
			cin >> data;
			L.insert(idx, data);
		}
		else if (input == "delete") {
			int idx;
			cin >> idx;
			cout << L.remove(idx) << endl;
		}
		else if (input == "print") {
			L.print();
		}
		else if (input == "size") {
			cout << L.size() << endl;
		}
		else if (input == "update") {
			int from, to;
			cin >> from >> to;
			L.update(from, to);
		}
	}
}

void main_array(int n)
{
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input == "append") {
			
		}
}
