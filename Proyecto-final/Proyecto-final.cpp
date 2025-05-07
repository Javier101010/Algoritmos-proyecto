#include <iostream>

using namespace std;

void mantenimientoSede()
{
    // Implementar el menú de mantenimiento de sede aquí
}

void mantenimientoRegistro()
{
    // Implementar el menú de mantenimiento de registros aquí
}

void mantenimientoTrabajador()
{
    // Implementar el menú de mantenimiento de trabajadores aquí
}

void mantenimientoProducto()
{
    // Implementar el menú de mantenimiento de producto aquí
}

void mantenimientoCaja()
{
    // Implementar el menú de mantenimiento de caja aquí
}

void mantenimientoReclamos()
{
    // Implementar el menú de mantenimiento de reclamos aquí
}

void mantenimientoCalendario()
{
    // Implementar el menú de mantenimiento de calendario aquí
}

void mantenimientoIncidentes()
{
    // Implementar el menú de mantenimiento de incidentes aquí
}


int main()
{
    // Banner de bienvenida en verde
    cout << "\033[1;32m";
    cout << R"(
     __________________________________________________________________________
    |   ____________________________________________________________________   |
    |  |   ______________________________________________________________   |  |
    |  |  |                                                              |  |  |
    |  |  |        B I E N V E N I D O   A                               |  |  |
    |  |  |                        L A   I N T E R F A Z                 |  |  |
    |  |  |                                      D E   T O T T U S       |  |  |
    |  |  |______________________________________________________________|  |  |
    |  |____________________________________________________________________|  |
    |__________________________________________________________________________|
    )" << endl;
    cout << "\033[0m";  // Resetear color

    do
    {
        // Título de selección en verde subrayado
        cout << "\033[1;32m----------------------------------------------------------------------------------------------\033[0m" << endl;
        cout << "\033[1;32;4mIngrese la opcion que desea realizar:\033[0m" << endl;
        cout << endl;
        cout << "1. Mantenimiento de Sede" << endl;
        cout << "2. Mantenimiento de Registros" << endl;
        cout << "3. Mantenimiento de Trabajadores" << endl;
        cout << "4. Mantenimiento de Producto" << endl;
        cout << "5. Mantenimiento de Caja" << endl;
        cout << "6. Mantenimiento de Reclamos" << endl;
        cout << "7. Mantenimiento de Calendario" << endl;
        cout << "8. Mantenimiento de Incidentes" << endl;
		cout << "9. Salir" << endl;

        int opcion;
        cout << "Opcion: ";
        cin >> opcion;
		cout << endl;

        // Títulos en azul subrayado
        switch (opcion)
        {
        case 1:
            cout << "\033[1;34m----------------------------------------------------------------------------------------------\033[0m" << endl;
            cout << "\033[4;34mMantenimiento de Sede\033[0m" << endl;
            break;
        case 2:
            cout << "\033[1;34m----------------------------------------------------------------------------------------------\033[0m" << endl;
            cout << "\033[4;34mMantenimiento de Registros\033[0m" << endl;
            break;
        case 3:
            cout << "\033[1;34m----------------------------------------------------------------------------------------------\033[0m" << endl;
            cout << "\033[4;34mMantenimiento de Trabajadores\033[0m" << endl;
            break;
        case 4:
            cout << "\033[1;34m----------------------------------------------------------------------------------------------\033[0m" << endl;
            cout << "\033[4;34mMantenimiento de Producto\033[0m" << endl;
            break;
        case 5:
            cout << "\033[1;34m----------------------------------------------------------------------------------------------\033[0m" << endl;
            cout << "\033[4;34mMantenimiento de Caja\033[0m" << endl;
            break;
        case 6:
            cout << "\033[1;34m----------------------------------------------------------------------------------------------\033[0m" << endl;
            cout << "\033[4;34mMantenimiento de Reclamos\033[0m" << endl;
            break;
        case 7:
            cout << "\033[1;34m----------------------------------------------------------------------------------------------\033[0m" << endl;
            cout << "\033[4;34mMantenimiento de Calendario\033[0m" << endl;
            break;
        case 8:
            cout << "\033[1;34m----------------------------------------------------------------------------------------------\033[0m" << endl;
            cout << "\033[4;34mMantenimiento de Incidentes\033[0m" << endl;
            break;
		case 9:
            int confirmacion;
            do {
                cout << "\033[1;31m¿Esta seguro que desea salir del programa?\033[0m" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cout << "Opcion: ";
                cin >> confirmacion;

                if (confirmacion != 1 && confirmacion != 2) {
					cout << endl;
                    cout << "\033[1;31mSolo puede elegir 1 o 2. Intente de nuevo.\033[0m" << endl;
                }

            } while (confirmacion != 1 && confirmacion != 2);

            if (confirmacion == 1) {
                cout << "\033[1;32mSaliendo del programa...\033[0m" << endl;
                return 0;
            }
            else {
                cout << "\033[1;32mRegresando al menu principal...\033[0m" << endl;
            }
            break;
        default:
            cout << "\033[1;31mOpcion invalida. Intente nuevamente.\033[0m" << endl;
            break;
        }

        cout << endl;

    } while (true);

    return 0;
}