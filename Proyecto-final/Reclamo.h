#pragma once
#include <string>
using namespace std;

class CReclamo {
private:
    int idReclamo;
    string tipoReclamo;
    string descripcion;
    int idCliente;
    int idPago;
    int estado;

public:
    CReclamo(int idReclamo, string tipoReclamo, string descripcion, int idCliente, int idPago, int estado) {
        this->idReclamo = idReclamo;
        this->tipoReclamo = tipoReclamo;
        this->descripcion = descripcion;
        this->idCliente = idCliente;
        this->idPago = idPago;
        this->estado = estado;
    };

    ~CReclamo();

    int getIdReclamo() { return idReclamo; };
    string getTipoReclamo() { return tipoReclamo; };
    string getDescripcion() { return descripcion; };
    int getIdCliente() { return idCliente; };
    int getIdPago() { return idPago; };
    int getEstado() { return estado; };

	void setIdReclamo(int idReclamo) { this->idReclamo = idReclamo; };
	void setTipoReclamo(string tipoReclamo) { this->tipoReclamo = tipoReclamo; };
	void setDescripcion(string descripcion) { this->descripcion = descripcion; };
	void setIdCliente(int idCliente) { this->idCliente = idCliente; };
	void setIdPago(int idPago) { this->idPago = idPago; };
	void setEstado(int estado) { this->estado = estado; };

};
