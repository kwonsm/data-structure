#include "Red_Black_Tree.h"

Red_Black_Tree::Red_Black_Tree()
{
	root = nullptr;
	root->key = -1;
	root->color = "black";
	root->left = root->right = root->parent = root;
	numofnode = 0;
}

Red_Black_Tree::~Red_Black_Tree()
{
	std::cout << "제거 되었습니다." << std::endl;
}

void Red_Black_Tree::leftRotate(Node* cur)
{
	Node* temp = cur->right;
	cur->right = temp->left;
	if (temp->left != root) temp->left->parent = cur;
	temp->parent = cur->parent;
	if (cur->parent = root) root->right = temp;
	else if (cur == cur->parent->left) cur->parent->left = temp;
	else cur->parent->right = temp;
}

void Red_Black_Tree::rightRotate(Node* cur)
{
	Node* temp = cur->left;
	cur->left = temp->right;
	if (temp->right != root) temp->right->parent = cur;
	temp->parent = cur->parent;
	if (cur->parent == root) root->right = temp;
	else if (cur == cur->parent->left) cur->parent->left = temp;
	else cur->parent->right = temp;
	temp->right = cur;
	cur->parent = temp;
}
