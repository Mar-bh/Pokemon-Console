#ifndef POKEMON_H
#define POKEMON_H
#include <string>

class Pokemon {

    public:
        Pokemon();
        Pokemon(std::string,std::string,int,std::string[]);
        std::string getNombre() const;
        std::string getTipo() const;
        int getNivel() const;
        std::string[] getHabilidades() const;
        void setNombre(std::string);
        void setTipo(std::string);
        void setNivel(std::string);
        void setHabilidades(std::string[]);
        void imprime();
        void subirNivel();
        void utilizarHabilidad(int);
        
    private:
    std::string nombre;
    std::string tipo;
    int nivel;
    std::string[] habilidades;
        
};

#endif