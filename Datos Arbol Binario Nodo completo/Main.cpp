#include"Nodo.h"

int main() {
	Node* root = nullptr;
	root->add(&root, new Node(1));
	root->add(&root, new Node(2));
	root->add(&root, new Node(-1));
	root->add(&root, new Node(12));
	root->print(root);
	cout << endl << root->toStringRecursive(root);
	return 0;
}