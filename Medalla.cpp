#include <iostream>
#include "Medalla.h"
#include <string>

Medalla::Medalla(){
    nombre = "Sin medalla";
    valor = "Sin valor";
}

Medalla::Medalla(std::string _nombre, std::string _valor){
    nombre = _nombre;
    valor = _valor;
}

std::string Medalla::getNombre() const;
    return nombre;
}

std::

