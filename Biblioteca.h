//
// Created by Maor Roizman Gheiler on 22/09/19.
//

#ifndef POLIMORFISMO_BIBLIOTECA_H
#define POLIMORFISMO_BIBLIOTECA_H

#include "Definiciones.h"
#include "Volumen.h"

class Biblioteca {
private:
    TipoEntero maxLibros;
    TipoEntero maxRevistas;
    TipoEntero numVolumenes;
    Volumen* pVol = nullptr;

public:
    Biblioteca();
    Biblioteca(TipoEntero _maxLibros, TipoEntero _maxRevistas);
    void mostrarBiblioteca();
    bool inlcuir(Volumen&);

};


#endif //POLIMORFISMO_BIBLIOTECA_H
