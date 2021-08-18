#include "fstream"
#include "Enfermedad.h"
#include "Lista.h"
#include "IteradorLista.h"
#include "string"
#include "Paciente.h"
#include "ListaCSS.h"

float porcentajes(string str,char a) {
    int count = 0;
    float porcentaje;
    for (int i = 0; i < str.size(); i++) {
    if (str[i] == a)
        count++;}
    porcentaje=(count*100)/str.size();
    return porcentaje;

}
int main() {


    //Crear lista con Enfermedades
    Lista<Enfermedad> enfm;
    IteradorLista<Enfermedad>* itE=enfm.crearIterador();
    Json::Reader jread;
    Json::Value jvalue;
    ifstream  read("\\Users\\PC\\Desktop\\progra2\\ListaSecuenciaEnfermedad.JSON");
    jread.parse(read,jvalue);
    for(int i=0; i<jvalue.size();i++){
        enfm.insertarAtras(new Enfermedad(jvalue[i]["nombre"].asString(),jvalue[i]["secuencia"].asString()));
    }

    //Crear Lista de Pacientes
    Lista<Paciente> listP;
    IteradorLista<Paciente>* itP=listP.crearIterador();
    fstream pacientes;
    string nombre;
    string id;
    string secuencia;
    pacientes.open("\\Users\\PC\\CLionProjects\\untitled\\CadenaADN-Pacientes.csv");
    int count=0;
    if(pacientes.is_open()){
        while(!pacientes.eof()){
                getline(pacientes,nombre,';');
                getline(pacientes,id,';');
                getline(pacientes,secuencia);

                listP.insertarAtras(new Paciente(nombre,id,secuencia));
        }
        pacientes.close();
    }

    //Crear lista csss
    Lista<ListaCSS>listcss;
    IteradorLista<ListaCSS>* itcs=listcss.crearIterador();
    vector<string>temp;
    for (itP->first(); itP->hasNext(); itP->next()) {
        Paciente *pacient = itP->getElement();
        for (itE->first(); itE->hasNext(); itE->next()) {
            Enfermedad *enf = itE->getElement();
            if (pacient->getSecuencia().find(enf->getCadena()) != string::npos) {
                temp.push_back(enf->getNombre());
            }
        }
        listcss.insertarAtras(new ListaCSS(pacient->getNombre(),temp));
        temp.clear();
    }


    int opc;
    do {


        cout << "Menu" << endl;
        cout << "1.Analisis uno" << endl;
        cout << "2.Analisis dos" << endl;
        cout << "3.Analisis tres" << endl;
        cout << "4.Salir" << endl;
        cin >> opc;
        switch (opc) {
            case 1: {
                    cout<<listcss.toanalyze1();
            }break;
            case 2: {
                for (itP->first(); itP->hasNext(); itP->next()) {
                    int count = 0;
                    Paciente *pacient = itP->getElement();
                    cout << pacient->getNombre() << endl;
                    cout << "Adenina: " << porcentajes(pacient->getSecuencia(), 'A') << "%" << endl;
                    cout << "Timina: " << porcentajes(pacient->getSecuencia(), 'T') << "%" << endl;
                    cout << "Guanina: " << porcentajes(pacient->getSecuencia(), 'G') << "%" << endl;
                    cout << "Citosina: " << porcentajes(pacient->getSecuencia(), 'C') << "%" << endl;
                    cout<<"\n";

                }

            }
                break;
            case 3: {
                    cout<<listcss.toString()<<endl;
                    fstream archivocss;
                    archivocss.open("ccs.csv", ios::out);
                    if(archivocss.is_open()){
                        archivocss<<listcss.toString()<<endl;
                        archivocss.close();
                    }


            }break;


        }

    }while(opc!=4);






    return 0;
}
