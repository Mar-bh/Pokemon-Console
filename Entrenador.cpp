//Implementacion de la clase
#pragma once
#include <iostream>
#include "Entrenador.h"
#include <string>
using namespace std;

Entrenador::Entrenador() {
	nombre = "Invitiado";
	experiencia = 0;
	medallas = 0;
	rango = "NOOB";
}

Entrenador::Entrenador(string _nomb, int _expe, int _meda, string _rang) {
	nombre = _nomb;
	experiencia = _expe;
	medallas = _meda;
	rango = _rang;
}

//Metodos de acceso o getters
string Entrenador::getNombre() const {
	return nombre;
}

int Entrenador::getExperiencia() const {
	return experiencia;
}

int Entrenador::getMedallas() const {
	return medallas;
}

string Entrenador::getRango() const {
	return rango;
}

//Metodos modificadores o setters
void Entrenador::setNombre(string _nom) {
	nombre = _nom;
}
void Entrenador::setExperiencia(int _exp) {
	experiencia = _exp;
}
void Entrenador::setMedallas(int _med) {
	medallas = _med;
}
void Entrenador::setRango(string _ran) {
	rango = _ran;
}

//Metodos adicionales
void Entrenador::imprime() {
	cout << "\n\t//Entrenador// \n>>>Nombre: \t\t" << nombre << "\n>>>Experiencia: \t" << experiencia << "\n>>>Medallas: \t\t" << medallas << "\n>>>Rango: \t\t" << rango<<"\n";
}