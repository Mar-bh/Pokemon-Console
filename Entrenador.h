#ifndef ENTRENADOR_H
#define ENTRENADOR_H
#include <string>

class Entrenador {

    public:
        Entrenador();
        Entrenador(std::string,int,int);
    private:
        std::string nombre;
        int experiencia;
        int medallas;



	double getx() const;
	double gety() const;

	void setx(double);
	void sety(double);

	double distance(Punto);
	std::string toStringPunto();
	void imprime();

private:
	double x;
	double y;
	std::string name;
	//double x;
	//		y;
};

#endif