//Implementacion de la clase
#include <iostream>
#include "Entrenador.h"
#include <string>

Entrenador::Entrenador() {
	nombre = "Mariana";
	experiencia = 18;
	medallas = 0;
}
Entrenador::Entrenador(std::string _nomb, int _experiencia, int _meda) {
	nombre = _nomb;
	experiencia = _experiencia;
	medallas = _meda;
}

//Metodos de acceso o getters
double Entrenador::getnombre() const {
	return nombre;

}

double Entrenador::getexperiencia() const {
	return experiencia;

}
double Entrenador::getmedallas() const {
	return medalla;

}

//Metodos modificadores o setters
void Punto::setx(double _valx) {
	x = _valx;
}
void Punto::sety(double _valy) {
	y = _valy;
}

//Metodos adicionales
double Punto::distance(Punto P) {
	double dist = sqrt(pow(P.getx() - x, 2) + pow(P.gety() - y, 2));
	return dist;
}

std::string Punto::toStringPunto() {
	std::string toPrint = "(" + std::to_string(x) + "," + std::to_string(y) + ")";
	return toPrint;

}

void Punto::imprime() {
	std::cout << "x: " << x << " y: " << y << std::endl;
}