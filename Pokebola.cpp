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

void Pokebola::setTipo(std::string){
    

}

void Pokebola::setPokemon(Pokemon){

}

void Pokebola::atrapar(bool){

}

void Pokebola::liberar(bool){
    
}

void imprime(){

}