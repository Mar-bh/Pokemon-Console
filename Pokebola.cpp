#pragma once
#include <iostream>
#include "Pokebola.h"
#include <string>
using namespace std;

Pokebola::Pokebola() {
    tipo = "Pokebola";
    pokemon = Pokemon();
    ocupada = false;
}

Pokebola::Pokebola(string _tipo, Pokemon _pokemon) {
    tipo = _tipo;
    pokemon = _pokemon;
    ocupada = true;
}

string Pokebola::getTipo() const {
    return tipo;
}

Pokemon Pokebola::getPokemon() const {
    return pokemon;
}

bool Pokebola::getOcupada() const {
    return ocupada;
}


void Pokebola::setTipo(string _tipo) {
    tipo = _tipo;
}

//void Pokebola::setPokemon(Pokemon _pokemon){
 //   pokemon = _pokemon;
//}

int Pokebola::atrapar(Pokemon pok) {
    if (ocupada == false) {
        pokemon = pok;
        ocupada = true;
        return 1;
    }
    return 0;
}

int Pokebola::liberar() {
    if (ocupada == true) {
        Pokemon p;
        pokemon = p;
        ocupada = false;
        return 1;
    }
    return 0;
}

void Pokebola::imprime() {
    Pokebola pokebola(tipo, pokemon);
    cout << "---------------------" << endl;
    cout << "-------POKEBOLA------" << endl;
    cout << "Tipo: " << tipo << endl;
    if (ocupada == true) {
        cout << "Contiene Pokemon: ";
        pokemon.imprime();
    }
    else {
        cout << "Pokebola vacia" << endl;
    }
    cout << "---------------------" << endl;
}




