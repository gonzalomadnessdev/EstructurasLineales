#ifndef COLA_H
#define COLA_H

#include "Nodo.h"

template <typename T>
class Cola {
private:
	Nodo<T>* p;
public:
	Cola();
	void queue(T item);
	T dequeue();
};

template <typename T>
Cola<T>::Cola() {
	this->p = nullptr;
}

template <typename T>
void Cola<T>::queue(T item) {
	Nodo<T>* nuevo = new Nodo<T>();
	nuevo->valor = item;
	if (p == nullptr)
	{
		nuevo->sig = nuevo;
	}
	else
	{
		nuevo->sig = p->sig;
		p->sig = nuevo;
	}
	
	p = nuevo;
}

template <typename T>
T Cola<T>::dequeue() {
	T valor = p->sig->valor;
	if (p == p->sig)
	{
		delete p;
		p = nullptr;
	}
	else
	{
		Nodo<T>* aux = p->sig;
		p->sig = aux->sig;
		delete aux;
	}
	
	return valor;
}

#endif
