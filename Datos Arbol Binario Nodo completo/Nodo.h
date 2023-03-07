#ifndef NODE_H
#define NODE_H
#include<iostream>
#include<sstream>
using namespace std;

class Node{
private:
	int data;
	Node* left;//siguiente
	Node* right;//Anterior
public:
	Node(int data=0, Node* left=nullptr, Node* right=nullptr);
	virtual ~Node();

	int getData();
	Node* getLeft();
	Node* getRight();

	void setData(int data);
	void setLeft(Node* left);
	void setRight(Node* right);

	void add(Node** root, Node* n);
	void print(Node* node);
	string toStringRecursive(Node* node);
};
#endif // !NODE_H



