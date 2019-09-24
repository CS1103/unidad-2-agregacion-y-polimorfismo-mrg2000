//
// Created by Maor Roizman Gheiler on 22/09/19.
//

#ifndef POLIMORFISMO_REVISTA_H
#define POLIMORFISMO_REVISTA_H

#include "Volumen.h"
#include "Definiciones.h"

class Revista: public Volumen {
private:
    TipoEntero numRevistas;

public:
    void Mostrar();

};


#endif //POLIMORFISMO_REVISTA_H
