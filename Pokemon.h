#pragma once
#ifndef POKEMON_H
#define POKEMON_H
#include <string>
//const int MAX=4;
class Pokemon {

public:
    Pokemon();
    Pokemon(string, string, int);
    string getNombre() const;
    string getTipo() const;
    int getNivel() const;
    string getHabilidades(int) const; //habilidad
    void setNombre(string);
    void setTipo(string);
    void setNivel(int);
    //void setHabilidades(std::string[]); //cuando tenga menos de 4 habilidades
    void imprime();
    void subirNivel();
    void imprimirHabilidad(int);
    //void utilizarHabilidad(int); //habilidad

private:
    string nombre;
    string tipo;
    int nivel;
    string habilidades[4] = { "Punch","SpecialHability","AcumulatedPower","Overkill" }; //todos tienen 4       //const int MAX=4;

};

#endif //Pokemon_H

//class Habilidad
//nombre
//etc

//.h arreglos de objetos habilidades
