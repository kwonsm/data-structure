#ifndef REDBLACKTREE
#define REDBLACKTREE
#include<iostream>
#include<string>

using namespace std;

class Node {
	friend class Red_Black_Tree;

	int key;
	string color;
	Node* parent;
	Node* left;
	Node* right;
};

 class Red_Black_Tree
{
 public:
	 Red_Black_Tree(); //������
	 ~Red_Black_Tree(); //�Ҹ���

	 void PreorderPrint(Node* node); //���� ��ȸ
	 void InorderPrint(Node* node); //���� ��ȸ
	 void PostorderPrint(Node* node); //���� ��ȸ

	 void insertion(const int& data); //����
	 void deletion(); //���� (�ݿ��ϱ���)

	 void leftRotate(Node* cur); //�������� ȸ��
	 void rightRotate(Node* cur); //���������� ȸ��

private:
	Node* root;
	int numofnode;
};

#endif