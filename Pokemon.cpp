#include <iostream>
#include "Pokemon.h"
#include <string>
//

Pokemon::Pokemon(){
    nombre = "Fennekin";
    tipo = "Fuego";
    nivel = 0;
    //habilidades[0] = "Golpe";
}

Pokemon::Pokemon(std::string _nomb, std::string _tipo, int _nive) {
	nombre = _nomb;
	tipo = _tipo;
	nivel = _nive;
	//habilidades[0] = _habi; //para agregar necesitas un metodo de agregar habilidad
}

//Metodos de acceso o getters
std::string Pokemon::getNombre() const{ // Si el nombre va a cambiar, no se deberia de cambiar el const? (de que sirve const)
	return nombre;
}

std::string Pokemon::getTipo() const {
	return tipo;
}

int Pokemon::getNivel() const {
	return nivel;
}

std::string Pokemon::getHabilidades(int opcion) const {
	return habilidades[opcion];
}

//Metodos modificadores o setters
void Pokemon::setNombre(std::string _nom) {
	nombre = _nom;
}
void Pokemon::setTipo(std::string _tip) {
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
	std::cout << "\n//Pokemon// \nNombre: \t" << nombre << "\nTipo: \t" << tipo << "\nNivel: \t\t" << nivel << "\nHabilidades: \t\t" << habilidades;
}
void Pokemon::imprimirHabilidad(int opcion) {
	std::cout << "La habilidad que el Pokemon"<< nombre << "utilizara es: " << habilidades[opcion]; // habilidad
}

