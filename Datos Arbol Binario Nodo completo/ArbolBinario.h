#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H
#include"Nodo.h"
class ArbolBinario {
private:
	Node* raiz;
public:
	ArbolBinario();
	virtual ~ArbolBinario();

	bool empty();
	void insert(int value);
	void insertNormal(int value);
	void insertRecursi(int value, Node* external);//hoja external
	void destroyTree(Node* node);
	Node* searchRecur(int value, Node* external);
	Node* search(int value);
};
#endif // !ARBOLBINARIO_H



