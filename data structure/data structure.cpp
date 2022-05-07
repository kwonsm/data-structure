#include<iostream>
#include<string>
//#include"SingleLinkedList.h"
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

/*void main_single_linked_list(int n) {
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
}

void main_array(int n)
{

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input == "append") {

		}
	}
}
