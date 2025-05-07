#pragma once
#include <string>

using namespace std;

class CProveedor
{
private:
	int id;
	string nombres;
	string apellidos;
	string direccion;
	string telefono;
	string email;

public:
	CProveedor(int id, string nombres, string apellidos, string direccion, string telefono, string email) {
		this->id = id;
		this->nombres = nombres;
		this->apellidos = apellidos;
		this->direccion = direccion;
		this->telefono = telefono;
		this->email = email;
	};

	~CProveedor() {};

	int getId() { return id; };
	string getNombres() { return nombres; };
	string getApellidos() { return apellidos; };
	string getDireccion() { return direccion; };
	string getTelefono() { return telefono; };
	string getEmail() { return email; };

	void setId(int id) { this->id = id; };
	void setNombres(string nombres) { this->nombres = nombres; };
	void setApellidos(string apellidos) { this->apellidos = apellidos; };
	void setDireccion(string direccion) { this->direccion = direccion; };
	void setTelefono(string telefono) { this->telefono = telefono; };
	void setEmail(string email) { this->email = email; };

};
