//
// Created by PC on 5/6/2021.
//

#ifndef UNTITLED_LISTACSS_H
#define UNTITLED_LISTACSS_H
#include "iostream"
#include "dist/json/json.h"
using namespace std;

class ListaCSS {
private:
    string nombre;
    vector<string> enfermedades;
    int porcentaje;
public:
    const string &getNombre() const;

    void setNombre(const string &nombre);

    int getPorcentaje() const;

    void setPorcentaje(int porcentaje);
    ListaCSS();
    ListaCSS(string nombre,vector<string> enfermedades);
    string toString();
    string toanalyze1();



};


#endif //UNTITLED_LISTACSS_H
