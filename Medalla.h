#pragma
#ifndef MEDALLA_H
#define MEDALL_H
#include <string>

class Medalla {

public:
    Medalla();
    Medalla(std::string, string);
    string getNombre() const;
    string getValor() const;
    void setNombre(string);
    void setValor(string);
    void imprime();

private:
    string nombre;
    string valor;
};

#endif