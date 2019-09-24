//
// Created by Maor Roizman Gheiler on 22/09/19.
//

#ifndef POLIMORFISMO_LIBRO_H
#define POLIMORFISMO_LIBRO_H

#include "Volumen.h"
#include "Definiciones.h"

class Libro: public Volumen {
private:
    TipoEntero numRevistas;

public:
    void Mostrar();

};


#endif //POLIMORFISMO_LIBRO_H
