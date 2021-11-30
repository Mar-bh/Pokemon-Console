#include <iostream>
#include "Entrenador.h"
#include "Pokemon.h"
#include "Medalla.h"
#include "Pokebola.h"
#include <string>


 int main() {
    std::string nombre;
    int experiencia;
    int medallas;
    std::string rango;
    std::cout << "Write your Champion name: ";
	std::cin >> nombre;
	std::cout << "Write your years of experience";
	std::cin >> experiencia;
	std::cout << "Write the quantoty of medals you have";
	std::cin >> medallas; 
    Entrenador entrenador(nombre, experiencia, medallas,rango);
	entrenador.imprime();
    
 }

 
