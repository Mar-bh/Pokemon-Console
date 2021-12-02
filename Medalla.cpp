#pragma once
#include <iostream>
#include "Medalla.h"
#include <string>
using namespace std;

Medalla::Medalla() {
    nombre = "Sin medalla";
    valor = "Sin valor";
}

Medalla::Medalla(string _nombre, string _valor) {
    nombre = _nombre;
    valor = _valor;
}

string Medalla::getNombre() const {
    return nombre;
}

string Medalla::getValor() const {
    return valor;
}

void Medalla::setNombre(string _nombre) {
    nombre = _nombre;
}

void Medalla::setValor(string _valor) {
    valor = _valor;
}

void Medalla::imprime() {
    cout << "--------------MEDALLA----------------" << std::endl;
    cout << "El nombre es: " << nombre << endl;
    cout << "El valor es: " << valor << endl;

}