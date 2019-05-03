//
// Created by utec on 03/05/19.
//

#include "Biblioteca.h"
#include <iostream>

void Libro::mostrar() {
    std::cout << "Volumen #" << numVolumen << " Libro #" << numLibro << " titulo: \"" << Nombre << "\"";
}

std::string Libro::mostrar_s() {
    std::string Result = "Volumen #" + std::to_string(numVolumen) + " Libro #" + std::to_string(numLibro) + " titulo: \"" + std::string(Nombre) + "\"";
    return Result;
}

void Revista::mostrar() {
    std::cout << "Volumen #" << numVolumen << " Revista #" << numRevista << " titulo: \"" << Nombre << "\"";
}

std::string Revista::mostrar_s() {
    std::string Result = "Volumen #" + std::to_string(numVolumen) + " Revista #" + std::to_string(numRevista) + " titulo: \"" + std::string(Nombre) + "\"";
    return Result;
}

void Biblioteca::mostrarBiblioteca() {
    for(int i = 0; i < vectorVolumenes.size(); i++) {
        vectorVolumenes[i]->mostrar();
        std::cout << std::endl;
    }
}

std::string Biblioteca::mostrarBiblioteca_string() {
    std::string Result = "";
    for(int i = 0; i < vectorVolumenes.size()-1; i++) {
        Result += vectorVolumenes[i]->mostrar_s();
        Result += "\n";
    }
    Result += vectorVolumenes[vectorVolumenes.size()-1]->mostrar_s();
    return Result;
}

bool Biblioteca::incluir(Volumen* v) {

    vectorVolumenes.push_back(v);
    auto var = dynamic_cast<Libro*>(v);
    if(var != nullptr) {maxLibros++;}
    else {maxRevistas++;}

    return true;
}

Biblioteca::~Biblioteca() {

    for(int i = vectorVolumenes.size()-1; i < 0; i--){
        delete vectorVolumenes[i];
    }

}
