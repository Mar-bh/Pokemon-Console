#ifndef ENTRENADOR_H
#define ENTRENADOR_H
#include <string>

class Entrenador {

    public:
        Entrenador();
        Entrenador(std::string,int,int);
    private:
        std::string nombre;
        int años;
        int medallas;
};

#endif