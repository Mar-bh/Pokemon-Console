#include <iostream>
#include "Entrenador.h"
#include "Pokemon.h"
#include "Medalla.h"
#include "Pokebola.h"
#include <string>


 int main() {
    int opcion = 0;
    int validacionPokemon = 0;
    std::string nombre;
    int experiencia;
    int medallas;
    std::string rango;
    std::string nombrePoke;
    std::string tipo;
    int nivel;
    std::string habilidades;
    std::string rango;
    std::cout << "Write your Champion name: ";
	std::cin >> nombre;
	std::cout << "Write your years of experience";
	std::cin >> experiencia;
	std::cout << "Write the quantoty of medals you have";
	std::cin >> medallas; 
    std::cout << "Do you want to use your pokemon?\n1) Yes :D\n2) No >:(";
    std::cin >> validacionPokemon;
    if (validacionPokemon == 1){
        std::cout << "Wich hability you want to use:\n1)Punch\n2)Special Hability\n3)Acumulated Power\nOverkill";
        std::cin >> opcion; 
    }

    Entrenador entrenador(nombre, experiencia, medallas,rango);
	entrenador.imprime();
    Pokemon pokemon(nombrePoke, tipo, nivel,habilidades); 
	pokemon.imprime();
 }

 
