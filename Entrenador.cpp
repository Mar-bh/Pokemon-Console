//Implementacion de la clase
#include <iostream>
#include "Entrenador.h"
#include <string>

Entrenador::Entrenador() {
	nombre = "Mariana";
	experiencia = 18;
	medallas = 0;
	rango = "Principiante";
}

Entrenador::Entrenador(std::string _nomb, int _expe, int _meda,std::string _rang) {
	nombre = _nomb;
	experiencia = _expe;
	medallas = _meda;
	rango = _rang;
}

//Metodos de acceso o getters
std::string Entrenador::getnombre() const {
	return nombre;
}

int Entrenador::getexperiencia() const {
	return experiencia;
}

int Entrenador::getmedallas() const {
	return medallas;
}

std::string Entrenador::getrango() const {
	return rango;
}

//Metodos modificadores o setters
void Entrenador::setnombre(std::string _nom) {
	nombre = _nom;
}
void Entrenador::setexperiencia(int _exp) {
	experiencia = _exp;
}
void Entrenador::setmedallas(int _med) {
	medallas = _med;
}
void Entrenador::setrango(std::string _ran) {
	rango = _ran;
}

//Metodos adicionales
void Entrenador::imprime() {
	std::cout << "\n//Entrenador// \nNombre: \t" << nombre << "\nExperiencia: \t" << experiencia << "\nMedallas: \t\t" << medallas << "\nRango: \t\t" << rango;
}