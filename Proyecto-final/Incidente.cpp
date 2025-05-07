#include <iostream>
#include <list>
#include <string>

using namespace std;

class CIncidente
{
private:
	int idIncidente;
	string tipoIncidente;
	string descripcion;
	int idTrabajador;
	int estado;

public:
	CIncidente(int idIncidente, string tipoIncidente, string descripcion, int idTrabajador, int estado) {
		this->idIncidente = idIncidente;
		this->tipoIncidente = tipoIncidente;
		this->descripcion = descripcion;
		this->idTrabajador = idTrabajador;
		this->estado = estado;
	}

	~CIncidente() {}

	int getIdIncidente() { return idIncidente; }
	string getTipoIncidente() { return tipoIncidente; }
	string getDescripcion() { return descripcion; }
	int getIdTrabajador() { return idTrabajador; }
	int getEstado() { return estado; }

};