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