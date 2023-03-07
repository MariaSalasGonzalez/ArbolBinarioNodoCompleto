#include "ArbolBinario.h"

ArbolBinario::ArbolBinario(){
	raiz = nullptr;
}

ArbolBinario::~ArbolBinario(){

}

bool ArbolBinario::empty()
{
	return raiz==nullptr;
}

void ArbolBinario::insert(int value){
	if (raiz != nullptr) { insertRecursi(value, raiz); }
	else {
		raiz = new Node;
		//raiz->getData(value);//video es raiz->setInfo(value);
	}
}

void ArbolBinario::insertNormal(int value)
{
	Node* nuevo;
	Node* temp;
	temp = raiz;
	nuevo = new Node;
	nuevo->setData(value);
	if (raiz == nullptr) { raiz = nuevo; }
	else {
		while (temp != nullptr) {
			if (temp->getData() > value) {
				if (temp->getLeft() == nullptr) {
					temp->setLeft(nuevo);
				}
				else
				{
					temp = temp->getLeft();
				}
			}
			else if (temp->getData() < value) {
				if (temp->getRight() == nullptr)
				{
					temp->setRight(nuevo);
				}
				else
				{
					temp = temp->getRight();
				}
			}
			else return;
		}
	}
}


void ArbolBinario::insertRecursi(int value, Node* external)
{
	if (value<external->getData()){
		if (external->getLeft() != nullptr) {
			insertRecursi(value, external->getLeft());
		}
		else
		{
			external->setLeft(new Node);
			external = external->getLeft();
			external->setData(value);
		}

	}
	else {
		if (value >= external->getData()) {
			if (external->getRight() != nullptr) {
				insertRecursi(value, external->getRight());
			}
			else {
				external->setRight(new Node);
				external = external->getRight();
				external->setData(value);
			}
		}
	}
}

void ArbolBinario::destroyTree(Node* node)
{
}

Node* ArbolBinario::searchRecur(int value, Node* external)
{
	if (external!= nullptr){
		if (value==external->getData()){
			return external;
		}if (value< external->getData()){
			return searchRecur(value, external->getLeft());
		}
		else{
			return searchRecur(value, external->getRight());
		}
	}
	return nullptr;
}

Node* ArbolBinario::search(int value)
{
	return searchRecur(value, raiz);
}

