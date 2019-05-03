/*
#include <iostream>
#include "Biblioteca.h"

int main() {

    Biblioteca b1;
    Volumen* v1 = new Libro(b1.get_numVolumen(),"L1",b1.get_maxLibros());
    b1.incluir(v1);
    Volumen* v2 = new Revista(b1.get_numVolumen(),"R1",b1.get_maxRevistas());
    b1.incluir(v2);
    Volumen* v3 = new Libro(b1.get_numVolumen(),"L2",b1.get_maxLibros());
    b1.incluir(v3);
    Volumen* v4 = new Revista(b1.get_numVolumen(),"R2",b1.get_maxRevistas());
    b1.incluir(v4);
    Volumen* v5 = new Libro(b1.get_numVolumen(),"L3",b1.get_maxLibros());
    b1.incluir(v5);

    b1.mostrarBiblioteca();
    std::cout << b1.mostrarBiblioteca_string();

    delete v1; delete v2; delete v3; delete v4; delete v5;

    return 0;
}*/