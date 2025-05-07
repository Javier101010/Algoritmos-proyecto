#include <string>
#include <queue>
#include <stack>
#include <iostream>

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
	CProveedor(int id, string nombres, string apellidos, string direccion, string telefono, string email)
	{
		this->id = id;
		this->nombres = nombres;
		this->apellidos = apellidos;
		this->direccion = direccion;
		this->telefono = telefono;
		this->email = email;
	}
	~CProveedor(){}

	int getId() { return id; }
	string getNombres() { return nombres; }
	string getApellidos() { return apellidos; }
	string getDireccion() { return direccion; }
	string getTelefono() { return telefono; }
	string getEmail() { return email; }
};