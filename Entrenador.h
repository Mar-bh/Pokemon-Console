#ifndef ENTRENADOR_H
#define ENTRENADOR_H
#include <string>
#include "Medalla.h"

class Entrenador {

    public:
        Entrenador();
        Entrenador(std::string,int,int,std::string);

        std::string getnombre() const;
        int getexperiencia() const;
        int getmedallas() const;
        std::string getrango() const;

        void setnombre(std::string);
	    void setexperiencia(int);
        void setmedallas(int);
        void setrango(std::string);

        void imprime();
    private:
        std::string nombre;
        int experiencia;
        int medallas;
        std::string rango;
        
};

#endif