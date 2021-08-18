//
// Created by PC on 5/6/2021.
//

#include "ListaCSS.h"

const string &ListaCSS::getNombre() const {
    return nombre;
}

void ListaCSS::setNombre(const string &nombre) {
    ListaCSS::nombre = nombre;
}

int ListaCSS::getPorcentaje() const {
    return porcentaje;
}

void ListaCSS::setPorcentaje(int porcentaje) {
    ListaCSS::porcentaje = porcentaje;
}

ListaCSS::ListaCSS() {
    nombre="";
    porcentaje=0;
    for(int i=0;i<enfermedades.size();i++){
        enfermedades[i]="";
    }

}
ListaCSS::ListaCSS(string nombre, vector<string> enfermedades){
    this->nombre=nombre;
    this->enfermedades=enfermedades;
    if(enfermedades.size()==2){
        porcentaje=40;
    }
    if(enfermedades.size()>2){
        porcentaje=70;
    }


}
string ListaCSS::toString() {
    stringstream s;
    if(porcentaje!=0){
    s<<"Nombre: "<<nombre<<endl;
    s<<"Enfermedades: "<<endl;
    for(int i=0;i<enfermedades.size();i++){
        s<<enfermedades[i]<<endl;
    }
    s<<"Porcentajes: "<<porcentaje<<"%"<<endl;
    }
    return s.str();
}
string ListaCSS::toanalyze1() {
    stringstream s;
    s<<"Nombre: "<<nombre<<endl;
    s<<"Enfermedades: "<<endl;
    for(int i=0;i<enfermedades.size();i++){
        s<<enfermedades[i]<<endl;
    }

    return s.str();

}

