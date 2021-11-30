#ifndef ENTRENADOR_H
#define ENTRENADOR_H
#include <string>
#include "Medalla.h"

class Entrenador {

    public:
        Entrenador();
        Entrenador(std::string,int,int);

        std::string getnombre() const;
        int getexperiencia() const;
        int getmedallas() const;

        void setnombre(std::string);
	    void setexperiencia(int);
        void setmedallas(int);

        void imprime();
    private:
        std::string nombre;
        int experiencia;
        int medallas;
        
};

#endif