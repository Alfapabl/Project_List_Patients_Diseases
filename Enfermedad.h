//
// Created by PC on 4/6/2021.
//

#ifndef UNTITLED_ENFERMEDAD_H
#define UNTITLED_ENFERMEDAD_H
#include "iostream"
#include "dist/json/json.h"
using namespace std;

class Enfermedad {
private:
    string nombre;
    string cadena;
public:
    const string &getNombre() const;

    Enfermedad(string nombre, string cadena);

    virtual ~Enfermedad();

    Enfermedad();

    void setNombre(const string &nombre);

    const string &getCadena() const;

    void setCadena(const string &cadena);

    string toString();

};


#endif //UNTITLED_ENFERMEDAD_H
