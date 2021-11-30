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
