#include "Nodo.h"

Node::Node(int data, Node* left, Node* right):
	data(data), left(nullptr), right(nullptr)
{
}

Node::~Node()
{
}

int Node::getData(){return data;}
Node* Node::getLeft(){return left;}
Node* Node::getRight(){return right;}

void Node::setData(int data) { this->data = data; }
void Node::setLeft(Node* left) { this->left = left; }
void Node::setRight(Node* right) { this->right = right; }

void Node::add(Node** root, Node* n){
	if (!*root) { *root = n; return; }
	if ((*root)->getData() < n->getData()) { add(&(*root)->right, n); }
	else{ add(&(*root)->left, n); }
}

void Node::print(Node* node){
	if (!node) return;
	print(node->getLeft());
	printf("Value= %i\n", node->getData());
	print(node->getRight());
}

string Node::toStringRecursive(Node* node){
	stringstream a;
	a << "";
	if(node){
		a << toStringRecursive(node->getLeft());
		a << "VALOR= " << node->getData() << " ";
		a << toStringRecursive(node->getRight());
	}
	return a.str();
}


