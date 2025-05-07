#pragma once
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
	};

	~CIncidente() {};

	int getIdIncidente() { return idIncidente; };
	string getTipoIncidente() { return tipoIncidente; };
	string getDescripcion() { return descripcion; };
	int getIdTrabajador() { return idTrabajador; };
	int getEstado() { return estado; };

	void setIdIncidente(int idIncidente) { this->idIncidente = idIncidente; };
	void setTipoIncidente(string tipoIncidente) { this->tipoIncidente = tipoIncidente; };
	void setDescripcion(string descripcion) { this->descripcion = descripcion; };
	void setIdTrabajador(int idTrabajador) { this->idTrabajador = idTrabajador; };
	void setEstado(int estado) { this->estado = estado; };

};
