cmake_minimum_required(VERSION 3.19)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp dist/jsoncpp.cpp dist/json/json.h Nodo.h Enfermedad.cpp Enfermedad.h Lista.h ILista.h IteradorLista.h Iterador.h Paciente.cpp Paciente.h ListaCSS.cpp ListaCSS.h)