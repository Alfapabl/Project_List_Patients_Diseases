//
// Created by PC on 5/6/2021.
//

#ifndef UNTITLED_ITERADOR_H
#define UNTITLED_ITERADOR_H


template<class T>
class Iterador {
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool hasNext() = 0;
    virtual T* getElement() = 0;
};


#endif //UNTITLED_ITERADOR_H
