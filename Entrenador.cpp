//Implementacion de la clase
#include <iostream>
#include "Entrenador.h"
#include <string>

Entrenador::Entrenador() {
	nombre = "Mariana";
	anios = 18;
	medallas = 0;
}
Entrenador::Entrenador(std::string _nomb, int _anios, int _meda) {
	nombre = _nomb;
	anios = _anios;
	medallas = _meda;
}