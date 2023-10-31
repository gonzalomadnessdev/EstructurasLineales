#ifndef NODO_H
#define NODO_H

template <typename T>
class Nodo
{
	public:
		T valor;
		Nodo<T>* sig;
};

#endif