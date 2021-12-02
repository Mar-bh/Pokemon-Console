#pragma once
#ifndef ENTRENADOR_H
#define ENTRENADOR_H
#include <string>
#include "Medalla.h"

class Entrenador {

public:
    Entrenador();
    Entrenador(string, int, int, string);
    string getNombre() const;
    int getExperiencia() const;
    int getMedallas() const;
    string getRango() const;
    void setNombre(string);
    void setExperiencia(int);
    void setMedallas(int);
    void setRango(string);
    void imprime();

private:
    string nombre;
    int experiencia;
    int medallas;
    string rango;

};

#endif