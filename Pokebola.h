#ifndef POKEBOLA_H
#define POKEBOLA_H
#include <string>
#include "Pokemon.h"

class Pokebola {

    public:
        Pokebola();
        Pokebola(std::string, Pokemon);
        std::string getTipo() const;
        Pokemon getPokemon() const;
        void setTipo(std::string);
        //void setPokemon(Pokemon);
        int atrapar(Pokemon);
        int liberar();
        void imprime();
        
    private:
    std::string tipo;
    Pokemon pokemon;
    bool ocupada;
        
};

#endif //Pokebola_H