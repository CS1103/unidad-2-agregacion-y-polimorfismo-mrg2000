//
// Created by Maor Roizman Gheiler on 22/09/19.
//

#ifndef POLIMORFISMO_VOLUMEN_H
#define POLIMORFISMO_VOLUMEN_H

#include "Definiciones.h"

class Volumen {
private:
    TipoCadena nombre;
    TipoEntero numVolumen;

public:
    Volumen();
    ~Volumen();
    virtual void Mostrar();

};


#endif //POLIMORFISMO_VOLUMEN_H
