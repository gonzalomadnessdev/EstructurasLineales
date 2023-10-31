#include "Pila.h"
#include "Nodo.h"

template <typename T>
Pila<T>::Pila() {
	this->p = nullptr;
}

template <typename T>
void Pila<T>::push(T item) {
	Nodo<T>* nuevo = new Nodo<T>();
	nuevo->sig = p;
	nuevo->valor = item;
	p = nuevo;
}

template <typename T>
T Pila<T>::pop() {
	Nodo<T>* aux = p;
	T valor = aux->valor;
	p = aux->sig;
	delete aux;
	return valor;
}