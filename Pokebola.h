#ifndef POKEBOLA_H
#define POKEBOLA_H
#include <string>
#include "Pokemon.h"

class Pokebola {

public:
    Pokebola();
    Pokebola(string, Pokemon);
    string getTipo() const;
    Pokemon getPokemon() const;
    bool  getOcupada() const;
    void setTipo(string);
    //void setPokemon(Pokemon);
    int atrapar(Pokemon);
    int liberar();
    void imprime();

private:
    string tipo;
    Pokemon pokemon;
    bool ocupada;

};

#endif //Pokebola_H

