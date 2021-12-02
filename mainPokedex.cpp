#include <iostream>
#include <fstream>
#include "Entrenador.h"
#include "Pokebola.h"
#include <string>
using namespace std;

const int CANT = 15;
//Función para agregar a una lista los pokemones en el doc
void pokemonDisponible(){ 
    string tipo, nombre;
    int nivel, cantidad = 0;
    Pokemon poke [20];
    ifstream archivo;
    archivo.open("Pokemon.txt");
    while(archivo >> nombre >> tipo >> nivel ){
        poke[cantidad].setNombre(nombre);
        poke[cantidad].setTipo(tipo);
        poke[cantidad].setNivel(nivel);
        cantidad++;
    }
    archivo.close();
}
//Funcion Rango del jugador
std::string rango(int cant_exp, int cant_medallas){
    //    -cant exp (años) int;
    //-cant medallas (numero) int;
    int suma;
    suma = cant_exp + cant_medallas;
    if (suma == 0){
        return "-"; 
    }
    else if(suma >0 && suma <=2){
        return "I";
    }
    else if(suma >2 && suma <=4){
        return "II";
    }
    else if(suma >4 && suma <=6){
        return "III";
    }
    else if(suma >6 && suma <=8){
        return "IV";
    }
    else {
         return "V";
    }
}
//Función para registrar al entrenador
Entrenador registrarEntrenador(){
    int opcion = 0;
    cout << "---------------------" << endl;
    cout << "------BIENVENIDO-----" << endl;
    do {
        cout << "Presiona 1) para registrarte como entrenador o  2) para entrar como invitado" << endl;
        cin >> opcion;
        if (opcion != 1 || opcion !=2){
            cout << "Opcion ingresada invalida" << endl;
        }
    } while (opcion != 1 || opcion !=2);
    if (opcion==1){
        string nombre;
        int experiencia, medallas;
        cout << "Ingresa tu nombre: ";
	    cin >> nombre;
	    cout << "Ingresa tus años de experiencia: ";
	    cin >> experiencia;
	    cout << "Ingresa la cantidad de medalas que posees: ";
	    cin >> medallas; 
        string Rango = rango(experiencia,medallas);
        Entrenador entrenador(nombre, experiencia, medallas,Rango);
        return entrenador;
    } else {
        Entrenador entrenador; 
        return entrenador;
    }
}
//Funcion para seleccionar una habilidad
int habilidades(){
    int validacionPokemon;
    int opcion;
    do{
        cout << "Do you want to use your pokemon?\n1) Yes :D\n2) No >:(";
        cin >> validacionPokemon;
        if (validacionPokemon != 1 && validacionPokemon!= 2){
            cout << "Please choose beetwen 1 and 2";
        }
    } while(validacionPokemon != 1 && validacionPokemon!= 2);
    if (validacionPokemon == 1){
        do {
        cout << "Wich hability you want to use:\n1)Punch\n2)Special Hability\n3)Acumulated Power\n4)Overkill";
        cin >> opcion; 
        if (opcion <= 0 && opcion > 4){
            cout << "There are only 4 habilities";
        }
        }
        while(opcion <= 0 && opcion > 4);
        return opcion;
    }
}


int main() {
    Entrenador entrenador = registrarEntrenador();
	entrenador.imprime();
    pokemonDisponible();
    //Pokemon pokemon(nombrePoke, tipo, nivel,habilidades);
	//pokemon.imprime();
}

