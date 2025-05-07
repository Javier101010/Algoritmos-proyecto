#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

class CInventario 
{
private:
	int id;
	string nombre;
	double precio_costo;
	int cantidad;
	string fecha_ingreso;
	string fecha_vencimiento;

public:
	CInventario(int id, string nombre, double precio_costo, int cantidad, string fecha_ingreso, string fecha_vencimiento)
	{
		this->id = id;
		this->nombre = nombre;
		this->precio_costo = precio_costo;
		this->cantidad = cantidad;
		this->fecha_ingreso = fecha_ingreso;
		this->fecha_vencimiento = fecha_vencimiento;
	}

	~CInventario() {}

	int getId() { return id; }
	string getNombre() { return nombre; }
	double getPrecioCosto() { return precio_costo; }
	int getCantidad() { return cantidad; }
	string getFechaIngreso() { return fecha_ingreso; }
	string getFechaVencimiento() { return fecha_vencimiento; }

};