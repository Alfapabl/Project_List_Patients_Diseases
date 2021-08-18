//
// Created by PC on 5/6/2021.
//

#include "Paciente.h"

const string &Paciente::getNombre() const {
    return nombre;
}

void Paciente::setNombre(const string &nombre) {
    Paciente::nombre = nombre;
}

const string &Paciente::getId() const {
    return id;
}

void Paciente::setId(const string &id) {
    Paciente::id = id;
}

const string &Paciente::getSecuencia() const {
    return secuencia;
}

void Paciente::setSecuencia(const string &secuencia) {
    Paciente::secuencia = secuencia;
}

string Paciente::toString() {
    stringstream s;
    s<<"Nombre: "<<nombre<<endl;
    s<<"ID: "<<id<<endl;
    s<<"Secuencia: "<<secuencia<<endl;
    return s.str();
}

Paciente::Paciente(string nombre, string id, string secuencia) {
    this->nombre=nombre;
    this->id=id;
    this->secuencia=secuencia;
}