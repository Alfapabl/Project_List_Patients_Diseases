//
// Created by PC on 4/6/2021.
//

#ifndef UNTITLED_LISTA_H
#define UNTITLED_LISTA_H
#include <iostream>
#include <sstream>
#include "Nodo.h"
#include "ILista.h"

using namespace std;

template<class T> class IteradorLista;

template<class T>
class Lista :public ILista<T> {
private:
    Nodo<T>* raiz;
public:
    Lista();
    ~Lista();
    Nodo<T> *getRaiz();
    string toString();
    string toanalyze1();
    void insertarAdelante(T *elemento);
    void insertarAtras(T *elemento);
    IteradorLista<T>* crearIterador();
};

template<class T>
Lista<T>::Lista(){
    raiz = NULL;
}

template<class T>
Lista<T>::~Lista(){
    // recorrer lista
    Nodo<T> *actual = raiz;
    while(actual != NULL){
        Nodo<T>* nodoABorrar = actual;
        // ----------------------------------
        actual = actual->getSiguiente();

        delete nodoABorrar;
    }
}

template<class T>
string Lista<T>::toString(){
    stringstream s;

    // recorrer lista
    Nodo<T> *actual = raiz;
    while(actual != NULL){
        s<<actual->toString();
        // ----------------------------------
        actual = actual->getSiguiente();
    }

    return s.str();
}

template<class T>
string Lista<T>::toanalyze1() {
    stringstream s;

    // recorrer lista
    Nodo<T> *actual = raiz;
    while(actual != NULL){
        s<<actual->toanalyze1();
        // ----------------------------------
        actual = actual->getSiguiente();
    }

    return s.str();
}

template<class T>
void Lista<T>::insertarAdelante(T *elemento){
    if(raiz == NULL){
        Nodo<T>* nuevo = new Nodo<T>(elemento, NULL);
        raiz = nuevo;
    } else {
        Nodo<T>* nuevo = new Nodo<T>(elemento, raiz);
        raiz = nuevo;
    }
}

template<class T>
void Lista<T>::insertarAtras(T *elemento){
    if(raiz == NULL){
        Nodo<T>* nuevo = new Nodo<T>(elemento, NULL);
        raiz = nuevo;
    } else {
        Nodo<T> *actual = raiz;
        while (actual->getSiguiente() != NULL) {
            actual = actual->getSiguiente();
        }
        Nodo<T>* nuevo = new Nodo<T>(elemento, NULL);
        actual->setSiguiente(nuevo);
    }
}

template<class T>
Nodo<T> *Lista<T>::getRaiz() {
    return raiz;
}

template<class T>
IteradorLista<T> * Lista<T>::crearIterador(){
    return new IteradorLista<T>(this);
}

#endif //UNTITLED_LISTA_H
