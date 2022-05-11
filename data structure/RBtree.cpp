#include<iostream>
#include<string>

using namespace std;

class Node {
	friend class BinaryTree;
public:
	Node* parent() { return prt; }
	Node* left() { return lft; }
	Node* right() { return rit; }
	Node* grandparent() { return parent()->parent(); }
	Node* uncle() {
		Node* a = grandparent();
		Node* b = parent();
		if (b == a->left()) return a->right();
		else if (b == a->right()) return a->left();
	}

private:
	int data;
	Node* prt, * lft, * rit;
	string color;
};


class BinaryTree
{
public:
	BinaryTree() {
		root = new Node;
		root->lft = nullptr;
		root->prt = nullptr;
		root->rit = nullptr;
		root->color = "black";
		numofnode = 0;

	}
	~BinaryTree() {
		removeAll(root);
		delete root;
		numofnode = 0;
	}

	virtual void insertion(const int& key) = 0;
	virtual void deletion(const int& key) = 0;

	void preorder(Node* p) {
		if (p != nullptr) {
			cout << p->data << " ";
			preorder(p->left());
			preorder(p->right());
		}
	}
	void inorder(Node* p) {
		if (p != nullptr) {
			inorder(p->left());
			cout << p->data << " ";
			inorder(p->right());
		}
	}
	void postorder(Node* p) {
		if (p != nullptr) {
			postorder(p->left());
			postorder(p->right());
			cout << p->data << " ";
		}
	}

	int size() const { return numofnode; }
	bool is_empty() const { return (numofnode == 0); }
	void removeNode(Node* p) {
		Node* temp = p->parent();
		temp = nullptr;
		delete p;
	}
	void removeAll(Node* p) {
		if (p != nullptr) {
			removeAll(p->left());
			removeAll(p->right());
			removeNode(p);
		}
	}

private:
	Node* root;
	int numofnode;

};


class RBtree : public BinaryTree {
public:
	RBtree();

	virtual void insertion(const int& key);
	virtual void deletion(const int& key);
};

RBtree::RBtree() : BinaryTree() {}

void RBtree::insertion(const int& key)
{

}

