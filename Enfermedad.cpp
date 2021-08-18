//
// Created by PC on 4/6/2021.
//

#include "Enfermedad.h"

const string &Enfermedad::getNombre() const {
    return nombre;
}

void Enfermedad::setNombre(const string &nombre) {
    Enfermedad::nombre = nombre;
}

const string &Enfermedad::getCadena() const {
    return cadena;
}

void Enfermedad::setCadena(const string &cadena) {
    Enfermedad::cadena = cadena;
}

Enfermedad::Enfermedad() {
    nombre="";
    cadena="";
}

Enfermedad::Enfermedad(string nombre, string cadena) {
    this->nombre=nombre;
    this->cadena=cadena;
}

Enfermedad::~Enfermedad() {

}

string Enfermedad::toString() {
    stringstream s;
    s<<"Nombre: "<<nombre<<endl;
    s<<"Cadena: "<<cadena<<endl;
    return s.str();

}