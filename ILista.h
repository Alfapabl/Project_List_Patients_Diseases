//
// Created by PC on 5/6/2021.
//

#ifndef UNTITLED_ILISTA_H
#define UNTITLED_ILISTA_H
#include "Iterador.h"

template<class T>
class ILista {
public:
    virtual string toString() = 0;
    virtual void insertarAdelante(T *elemento) = 0;
    virtual void insertarAtras(T *elemento) = 0;
    virtual Iterador<T>* crearIterador() = 0;
};



#endif //UNTITLED_ILISTA_H
