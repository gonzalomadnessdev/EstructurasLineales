// EstructurasLineales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Pila.h"
#include "Cola.h"


int main()
{
    std::cout << "Pila" << std::endl;
    Pila<double>* p = new Pila<double>();

    p->push(1.1);
    p->push(3.2);
    p->push(7.3);

    std::cout << p->pop() << std::endl;
    std::cout << p->pop() << std::endl;
    std::cout << p->pop() << std::endl;

    std::cout << "Cola" << std::endl;
    Cola<double>* q = new Cola<double>();

    q->queue(1.1);
    q->queue(3.2);
    q->queue(7.3);

    std::cout << q->dequeue() << std::endl;
    std::cout << q->dequeue() << std::endl;
    std::cout << q->dequeue() << std::endl;
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
