#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList()
{
	head = new Node;
	tail = new Node;

	head = nullptr;
	tail = nullptr;
}

SingleLinkedList::~SingleLinkedList()
{
	while (!is_empty()) remove(0);
	delete head;
	delete tail;

}

void SingleLinkedList::insert(const int& idx, int data)
{
	Node* new_node = new Node;
	new_node->next = nullptr;
	new_node->data = data;

	Node* pre_node;
	Node* cur_node;

	if (idx == 0) { //¸Ç ¾Õ¿¡ »ðÀÔ
		if (is_empty()) { //Ã¹ »ðÀÔ
			head = new_node;
			tail = new_node;
		}
		else {
			new_node->next = head;
			head = new_node;
		}
		print();
	}
	else if (idx<0 || idx>size()) { //¹üÀ§¸¦ ¹þ¾î³­ »ðÀÔ
		cout << "Index error!" << endl;
	}
	else if(idx == size()) { //¸Ç µÚ¿¡ »ðÀÔ
		append(data);
	}
	else  { // ÀÏ¹ÝÀûÀÎ »ðÀÔ
		pre_node = cur_node = head;
		for (int cur_idx = 0; cur_idx < idx; cur_idx++) {
			pre_node = cur_node;
			cur_node = cur_node->next;
		}
		pre_node->next = new_node;
		new_node->next = cur_node;
		print();
	}
}

int SingleLinkedList::remove(const int& idx)
{
	int removeData;
	Node* cur_node;
	Node* pre_node;
	Node* new_node;

	if (is_empty() || size() <= idx) return -1;
	else if (idx == 0) {
		if (size() == 1) {
			removeData = head->data;
			head = nullptr;
			tail = nullptr;
		}
		else {
			cur_node = head;
			removeData = cur_node->data;
			new_node = cur_node->next;
			head = new_node;
			delete cur_node;
		}
	}
	else {
		pre_node = cur_node = head;
		for (int cnt = 0; cnt < idx; cnt++) {
			pre_node = cur_node;
			cur_node = cur_node->next;
		}
		removeData = cur_node->data;
		pre_node->next = cur_node->next;

		delete cur_node;
		if (cur_node == tail) {
			tail = pre_node;
		}
	}
	
	return removeData;
}

bool SingleLinkedList::is_empty() const
{
	return (head == nullptr && tail == nullptr);
}

int SingleLinkedList::size() const
{
	int size = 0;
	if(is_empty()) return size;
	else {
		Node* cur_node = head;
		while (cur_node->next != nullptr) {
			cur_node = cur_node->next;
			size++;
		}
		size++;
		return size;
	}
}

void SingleLinkedList::print() const
{
	if (is_empty()) cout << "empty" << endl;
	else {
		Node* cur_node = head;
		while (cur_node->next != nullptr) {
			cout << cur_node->data << " ";
			cur_node = cur_node->next;
		}
		cout << cur_node->data << endl;
	}
}

int SingleLinkedList::min() const
{
	if (is_empty()) {
		cout << "empty" << endl;
	}
	else {
		Node* cur_node = head;

		int m_data = cur_node->data;
		while (cur_node != nullptr) {
			if (m_data > cur_node->data)
				m_data = cur_node->data;
			cur_node = cur_node->next;
		}
		cout << m_data << endl;
	}
	return 0;
}

void SingleLinkedList::add_front(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	if (is_empty()) {
		head = new_node;
		tail = new_node;
	}
	else {
		new_node->next = head;
		head = new_node;
	}
}

void SingleLinkedList::append(int data)
{
	Node* new_node = new Node;
	new_node->next = nullptr;
	new_node->data = data;
	if (is_empty()) {
		head = new_node;
		tail = new_node;
	}
	else {
		tail->next = new_node;
		tail = new_node;
	}
	print();
}

int SingleLinkedList::remove_front()
{
	Node* old_node = head;
	if (size() == 1) head = tail = nullptr;
	else head = old_node->next;
	delete old_node;
	return 0;
}
