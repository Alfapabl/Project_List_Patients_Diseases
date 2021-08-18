//
// Created by PC on 5/6/2021.
//

#ifndef UNTITLED_ITERADORLISTA_H
#define UNTITLED_ITERADORLISTA_H
#include <iostream>
#include <sstream>
#include "Lista.h"
#include "Iterador.h"

using namespace std;

template<class T>
class IteradorLista : public Iterador<T>{
private:
    Lista<T> *lista;
    Nodo<T> *actual;
public:
    IteradorLista(Lista<T> *lista);
    ~IteradorLista();
    void first();
    void next();
    bool hasNext();
    T* getElement();
};

template<class T>
IteradorLista<T>::IteradorLista(Lista<T> *lista){
    this->lista = lista;
}

template<class T>
IteradorLista<T>::~IteradorLista(){}

template<class T>
void IteradorLista<T>::first(){
    actual = lista->getRaiz();
}

template<class T>
void IteradorLista<T>::next(){
    actual = actual->getSiguiente();
}

template<class T>
bool IteradorLista<T>::hasNext(){
    return actual!=NULL;
}

template<class T>
T* IteradorLista<T>::getElement() {
    return actual->getDato();
}



#endif //UNTITLED_ITERADORLISTA_H
