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

std::string Medalla::getNombre() const{
    return nombre;
}

std::string Medalla::getValor() const{
    return valor;
}

void Medalla::setNombre(std::string _nombre){
    nombre = _nombre;
}

void Medalla::setValor(std::string _valor){
    valor = _valor;
}

void Medalla::imprime(){
    std::cout << "--------------MEDALLA----------------" << std::endl;
    std::cout<< "El nombre es: " << nombre << std::endl; 
    std::cout<< "El valor es: " << valor << std::endl; 
   
}

