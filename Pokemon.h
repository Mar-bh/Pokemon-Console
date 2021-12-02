#ifndef POKEMON_H
#define POKEMON_H
#include <string>

class Pokemon {
    public:
        Pokemon();
        Pokemon(std::string, std::string, int);
        std::string getNombre() const;
        std::string getTipo() const;
        int getNivel() const;
        std::string getHabilidades(int) const; //habilidad
        void setNombre(std::string);
        void setTipo(std::string);
        void setNivel(int);
        //void setHabilidades(std::std::string[]); //cuando tenga menos de 4 habilidades
        void imprime();
        void subirNivel();
        void imprimirHabilidad(int);
        //void utilizarHabilidad(int); //habilidad
    private:
        std::string nombre;
        std::string tipo;
        int nivel;
        std::string habilidades[4] = { "Punch","SpecialHability","AcumulatedPower","Overkill" }; //todos tienen 4       //const int MAX=4;

};

#endif //Pokemon_H

//class Habilidad
//nombre
//etc

//.h arreglos de objetos habilidades
