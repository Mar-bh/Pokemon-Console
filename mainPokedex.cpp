#include <iostream>
#include "Entrenador.h"
#include "Pokebola.h"
#include <string>
using namespace std;


 int main() {
    int opcion = 0;
    int validacionPokemon = 0;
    string nombre;
    int experiencia;
    int medallas;
    string rango;
    string nombrePoke;
    string tipo;
    int nivel;
    string habilidades;
    string rango;
    cout << "Write your Champion name: ";
	cin >> nombre;
	cout << "Write your years of experience";
	cin >> experiencia;
	cout << "Write the quantoty of medals you have";
	cin >> medallas; 
    cout << "Do you want to use your pokemon?\n1) Yes :D\n2) No >:(";
    cin >> validacionPokemon;
    if (validacionPokemon == 1){
         cout << "Wich hability you want to use:\n1)Punch\n2)Special Hability\n3)Acumulated Power\nOverkill";
         cin >> opcion; 
    }

    Entrenador entrenador(nombre, experiencia, medallas,rango);
	entrenador.imprime();
    Pokemon pokemon(nombrePoke, tipo, nivel,habilidades);
	pokemon.imprime();
 }

 
