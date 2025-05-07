#pragma once
#include <string>

using namespace std;

class CPago
{
private:
	int idTransaccion;
	string nombre;
	string estado;

public:
	CPago(int idTransaccion, string nombre, string estado) {
		this->idTransaccion = idTransaccion;
		this->nombre = nombre;
		this->estado = estado;
	};

	~CPago() {};

	int getIdTransaccion() { return idTransaccion; };
	string getNombre() { return nombre; };
	string getEstado() { return estado; };

	void setIdTransaccion(int idTransaccion) { this->idTransaccion = idTransaccion; };
	void setNombre(string nombre) { this->nombre = nombre; };
	void setEstado(string estado) { this->estado = estado; };

};
