#pragma once
#include <iostream>
#include "Pokemon.h"
#include <string>
using namespace std;
//

Pokemon::Pokemon() {
	nombre = "Fennekin";
	tipo = "Fuego";
	nivel = 0;
	//habilidades[0] = "Golpe";
}

Pokemon::Pokemon(string _nomb, string _tipo, int _nive) {
	nombre = _nomb;
	tipo = _tipo;
	nivel = _nive;
	//habilidades[0] = _habi; //para agregar necesitas un metodo de agregar habilidad
}

//Metodos de acceso o getters
string Pokemon::getNombre() const { // Si el nombre va a cambiar, no se deberia de cambiar el const? (de que sirve const)
	return nombre;
}

string Pokemon::getTipo() const {
	return tipo;
}

int Pokemon::getNivel() const {
	return nivel;
}

string Pokemon::getHabilidades(int opcion) const {
	return habilidades[opcion];
}

//Metodos modificadores o setters
void Pokemon::setNombre(string _nom) {
	nombre = _nom;
}
void Pokemon::setTipo(string _tip) {
	tipo = _tip;
}
void Pokemon::setNivel(int _niv) {
	nivel = _niv;
}
//void Pokemon::setHabilidades(std::string _hab) {
//	habilidades[4] = _hab;
//} 

//Metodos adicionales
void Pokemon::imprime() {
	cout << "\n//Pokemones// \nNombre: \t" << nombre << "\nTipo: \t" << tipo << "\nNivel: \t\t" << nivel; // << "\nHabilidades: \t\t" << habilidades;
}
void Pokemon::imprimirHabilidad(int opcion) {
	cout << "La habilidad que el Pokemon" << nombre << "utilizara es: " << habilidades[opcion]; // habilidad
}