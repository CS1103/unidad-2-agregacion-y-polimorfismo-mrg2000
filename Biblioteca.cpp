//
// Created by Maor Roizman Gheiler on 22/09/19.
//

#include "Biblioteca.h"
#include "Definiciones.h"

#include <iostream>
using namespace std;


Biblioteca::Biblioteca(){
    numVolumenes = 0;
    pVol = new Volumen[numVolumenes];
}

Biblioteca::Biblioteca(TipoEntero _maxLibros, TipoEntero _maxRevistas) {
    maxLibros = _maxLibros;
    maxRevistas = _maxRevistas;
    numVolumenes = 0;
    pVol = new Volumen[numVolumenes];

}

void Biblioteca::mostrarBiblioteca() {
    for (int i = 0; i < numVolumenes; i++) {
        cout << "Volumen " << i << ": ";
        pVol[i].Mostrar();
        cout << endl;
    }

}

bool Biblioteca::inlcuir(Volumen &) {
    return false;
}
