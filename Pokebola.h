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
        void setPokemon(Pokemon);
        void atrapar(bool);
        void liberar(bool);
        void imprime();
        
    private:
    std::string tipo;
    Pokemon pokemon;
        
};

#endif //Pokebola_H