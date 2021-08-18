//
// Created by PC on 4/6/2021.
//

#ifndef UNTITLED_NODO_H
#define UNTITLED_NODO_H


#include <iostream>
#include <sstream>

using namespace std;

template<class T>
class Nodo {
private:
    T *dato;
    Nodo* siguiente;
public:
    Nodo(T* dato ,Nodo *siguiente);
    ~Nodo();

    void setDato(T *dato);
    void setSiguiente(Nodo *siguiente);
    T* getDato();
    Nodo* getSiguiente();
    string toString();
    string toanalyze1();
};

template<class T>
Nodo<T>::Nodo(T* dato, Nodo* siguiente){
    this->dato = dato;
    this->siguiente = siguiente;
}

template<class T>
Nodo<T>::~Nodo(){
    delete dato;
}

template<class T>
void Nodo<T>::setDato(T *dato){
    this->dato = dato;
}

template<class T>
void Nodo<T>::setSiguiente(Nodo *siguiente){
    this->siguiente = siguiente;
}

template<class T>
T* Nodo<T>::getDato(){
    return dato;
}

template<class T>
Nodo<T>* Nodo<T>::getSiguiente(){
    return siguiente;
}

template<class T>
string Nodo<T>::toString(){
    stringstream s;
    s<<dato->toString()<<endl;
    return s.str();
}
template<class T>
string Nodo<T>::toanalyze1(){
    stringstream s;
    s<<dato->toanalyze1()<<endl;
    return s.str();
}



#endif //UNTITLED_NODO_H
