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
	 Red_Black_Tree(); //생성자
	 ~Red_Black_Tree(); //소멸자

	 void PreorderPrint(Node* node); //전위 순회
	 void InorderPrint(Node* node); //중위 순회
	 void PostorderPrint(Node* node); //후위 순회

	 void insertion(const int& data); //삽입
	 void deletion(); //삭제 (금요일까지)

	 void leftRotate(Node* cur); //왼쪽으로 회전
	 void rightRotate(Node* cur); //오른쪽으로 회전

private:
	Node* root;
	int numofnode;
};

#endif