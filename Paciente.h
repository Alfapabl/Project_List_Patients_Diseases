//
// Created by PC on 5/6/2021.
//

#ifndef UNTITLED_PACIENTE_H
#define UNTITLED_PACIENTE_H
#include "iostream"
#include "dist/json/json.h"
using namespace std;

class Paciente {
private:
    string nombre;
    string id;
    string secuencia;
public:
    const string &getNombre() const;
    void setNombre(const string &nombre);
    const string &getId() const;
    void setId(const string &id);
    const string &getSecuencia() const;
    void setSecuencia(const string &secuencia);
    Paciente();
    Paciente(string nombre, string id, string secuencia);
    string toString();





};


#endif //UNTITLED_PACIENTE_H
