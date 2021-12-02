#pragma once
#include <iostream>
#include <fstream>
using namespace std; // Si se pone antes de los include de las Clases, no tenemos que ponerlo en los .h
#include "Entrenador.h"
#include "Pokebola.h"
#include "Pokemon.h"
#include "Medalla.h"
#include <string>


const int CANT = 15; // cantidad de pokemones disponibles
//const int CANTP = 4; //cantidad de pokebolas disponibles

//Función para agregar a una lista los pokemones en el doc
void pokemonDisponible() {
    string tipo, nombre;
    int nivel, cantidad = 0;
    Pokemon poke[15];
    ifstream archivo;
    archivo.open("Pokemon.txt");
    while (archivo >> nombre >> tipo >> nivel) {
        poke[cantidad].setNombre(nombre);
        poke[cantidad].setTipo(tipo);
        poke[cantidad].setNivel(nivel);
        cantidad++;
    }
    archivo.close();
}

//Funcion para imprimir los pokemones disponibles
void imprimirPokemonDisponible(Pokemon poke[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        poke[i].imprime();
        cout << endl;
    }
}
//Funcion para calcular el Rango del jugador
std::string rango(int cant_exp, int cant_medallas) {
    int suma;
    suma = cant_exp + cant_medallas;
    if (suma == 0) {
        return "-";
    }
    else if (suma > 0 && suma <= 2) {
        return "I";
    }
    else if (suma > 2 && suma <= 4) {
        return "II";
    }
    else if (suma > 4 && suma <= 6) {
        return "III";
    }
    else if (suma > 6 && suma <= 8) {
        return "IV";
    }
    else {
        return "V";
    }
}


//Función para registrar al entrenador
Entrenador registrarEntrenador() {
    int opcion = 0;
    cout << "---------------------" << endl;
    cout << "------BIENVENIDO-----" << endl;
    do {
        cout << "Presiona 1) para registrarte como entrenador o  2) para entrar como invitado" << endl;
        cin >> opcion;
        if (opcion != 1 && opcion != 2) {
            cout << "Opcion ingresada invalida" << endl;
        }
    } while (opcion != 1 && opcion != 2);
    if (opcion == 1) {
        string nombre;
        int experiencia;
        int medallas;
        cout << "Ingresa tu nombre: " << endl;
        cin >> nombre;
        cout << "Ingresa tus anios de experiencia: " << endl;
        cin >> experiencia;
        cout << "Ingresa la cantidad de medallas que posees: " << endl;
        cin >> medallas;
        string Rango = rango(experiencia, medallas);
        Entrenador entrenador(nombre, experiencia, medallas, Rango);
        return entrenador;
    }
    else {
        Entrenador entrenador;
        return entrenador;
    }
}

//Funcion para seleccionar una habilidad del pokemon
void habilidades(Pokebola pokebola) {
    Pokemon pokemon;
    int validacionPokemon;
    int opcion;
    do {
        cout << "Do you want to use your pokemon?\n1) Yes :D\n2) No >:(" << endl;
        cin >> validacionPokemon;
        if (validacionPokemon != 1 && validacionPokemon != 2) {
            cout << "Please choose beetwen 1 and 2" << endl;
        }
    } while (validacionPokemon != 1 && validacionPokemon != 2);
    if (validacionPokemon == 1) {
        do {
            cout << "Wich hability you want to use:\n1)Punch\n2)Special Hability\n3)Acumulated Power\n4)Overkill" << endl;
            cin >> opcion; //usar Switch? 
            if (opcion <= 1 && opcion > 4) {
                cout << "There are only 4 habilities" << endl;
            }
        } while (opcion <= 1 && opcion > 4);
        pokemon = pokebola.getPokemon();
        pokemon.imprimirHabilidad(opcion);
    }
    else {
        cout << "Tu pokemon no utilizará ninguna habillidad " << endl;
    }
}

void utilizaPokebola(Pokemon pokemon[], Pokebola pokebola) {
    int indicePoke = 0;
    string op;
    cout << "Posees una Pokebola " << endl;
    pokebola.imprime();
    cout << "¿Deseas atrapar un pokemon? " << endl << "1: Si" << endl << "Cualquier otra tecla: No" << endl;
    cin >> op;
    if (op == "1") {
        do {
            cout << "Elige un pokemon, teclea un numero del 1 al 15" << endl;
            cin >> indicePoke;
        } while (indicePoke >= 1 && indicePoke <= 15);
        pokebola.atrapar(pokemon[indicePoke - 1]);
    }
}


int main() {
    Pokemon poke[CANT];
    Pokebola pokebola;
    int cantidadPokemon;
    Entrenador entrenador = registrarEntrenador();
	entrenador.imprime();
    pokemonDisponible(poke, cantidadPokemon);
    imprimirPokemonDisponible(poke, cantidadPokemon);


    //Pokemon pokemon(nombrePoke, tipo, nivel,habilidades);
	//pokemon.imprime();
    //utilizaPokebola(poke,pokebola);
    //habilidades(pokebola);
}