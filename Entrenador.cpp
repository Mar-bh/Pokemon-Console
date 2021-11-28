//Implementacion de la clase
#include <iostream>
#include "Entrenador.h"
#include <string>

Entrenador::Entrenador() {
	nombre = "Mariana";
	años = 18;
	medallas = 0;
}
Entrenador::Entrenador(std::string _nomb, int _años, int _meda) {
	nombre = _nomb;
	años = _años;
	medallas = _meda;
}