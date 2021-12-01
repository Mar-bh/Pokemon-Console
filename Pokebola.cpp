#include <iostream>
#include "Pokebola.h"
#include <string>

Pokebola::Pokebola(){
    tipo = "Pokebola";
    pokemon = Pokemon();
}

Pokebola::Pokebola(std::string _tipo, Pokemon _pokemon){
    tipo = _tipo;
    pokemon = _pokemon;
}

std::string Pokebola::getTipo() const{
    return tipo;
}

Pokemon Pokebola::getPokemon() const{
    return pokemon;
}

void Pokebola::setTipo(std::string _tipo){
    tipo = _tipo;
}
void Pokebola::setPokemon(Pokemon _pokemon){
    pokemon = _pokemon;
}

void Pokebola::atrapar(bool _atrapa){
    Pokebola pokebola(tipo, pokemon);
    if(_atrapa == true){
        pokebola.setPokemon();
      
    }

}

void Pokebola::liberar(bool _libera){
    Pokebola pokebola(tipo, pokemon);
     if(_libera == true){
        pokebola.setPokemon(Pokemon());
    }

}

void Pokebola::imprime(){
    Pokebola pokebola(tipo, pokemon);
    std::cout << "---------------------" << std::endl;
    std::cout << "-------POKEBOLA------" << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Contiene Pokemon: ";
    pokemon.imprime();
    std::cout << "---------------------" << std::endl;




}