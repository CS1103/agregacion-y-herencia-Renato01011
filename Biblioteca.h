//
// Created by utec on 03/05/19.
//

#ifndef AGREGACION_Y_HERENCIA_RENATO01011_BIBLIOTECA_H
#define AGREGACION_Y_HERENCIA_RENATO01011_BIBLIOTECA_H

#include <string>
#include <vector>

class Volumen {
protected:
    int numVolumen;
    std::string Nombre;
public:
    Volumen(std::string Nombre): Nombre{Nombre}, numVolumen{0} {};
    Volumen(int numVolumen, std::string Nombre): numVolumen{numVolumen}, Nombre{Nombre} {};
    virtual ~Volumen() {};
    virtual void mostrar() = 0;
    virtual std::string mostrar_s() = 0;
    void set_numVolumen(int _numVolumen) {numVolumen = _numVolumen;}
};

class Libro: public Volumen {
    int numLibro;
public:
    Libro(int numVolumen, std::string Nombre, int numLibro): Volumen(numVolumen, Nombre), numLibro{numLibro} {}
    void mostrar() override;
    std::string mostrar_s();
    void set_numLibro(int _numLibro) {numLibro = _numLibro;}
};

class Revista: public Volumen {
    int numRevista;
public:
    Revista(int numVolumen, std::string Nombre, int numRevista): Volumen(numVolumen, Nombre), numRevista{numRevista} {};
    void mostrar() override;
    std::string mostrar_s();
    void set_numRevista(int _numRevista) {numRevista = _numRevista;}
};

class Biblioteca {
    int maxLibros;
    int maxRevistas;
    std::vector <Volumen*> vectorVolumenes;
public:
    Biblioteca(): maxLibros{1}, maxRevistas{1} {};
    ~Biblioteca();
    void mostrarBiblioteca();
    std::string mostrarBiblioteca_string();
    bool incluir(Volumen* v);
    int get_maxLibros(){return maxLibros;}
    int get_maxRevistas(){return maxRevistas;}
    int get_numVolumen(){return vectorVolumenes.size()+1;}
};

#endif //AGREGACION_Y_HERENCIA_RENATO01011_BIBLIOTECA_H
