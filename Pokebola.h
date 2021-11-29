#ifndef POKEBOLA_H
#define POKEBOLA_H
#include <string>

class Pokebola {

    public:
        Pokebola();
        Pokebola(std::string, std::string);
        std::string getNombre() const;
        std::string getValor() const;
        void setNombre(std::string);
        void setValor(std::string);
        void imprime();
        
    private:
        std::string nombre;
        std::string valor;
};

#endif //Pokebola_H