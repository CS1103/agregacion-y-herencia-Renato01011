//
// Created by utec on 03/05/19.
//

#include <iostream>
#include "Biblioteca.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

SCENARIO("Uso de Biblioteca") {
    Biblioteca b1;
    GIVEN("Libro L1, L2 y L3, y Revistas R1 y R2") {
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
        WHEN("Añadir Libros y Revistas") {
            THEN("Se deben añadir a la Biblioteca"){
                REQUIRE(b1.mostrarBiblioteca_string() == "Volumen #1 Libro #1 titulo: \"L1\"\n"
                                                         "Volumen #2 Revista #1 titulo: \"R1\"\n"
                                                         "Volumen #3 Libro #2 titulo: \"L2\"\n"
                                                         "Volumen #4 Revista #2 titulo: \"R2\"\n"
                                                         "Volumen #5 Libro #3 titulo: \"L3\"");
            }
        }
    }
}