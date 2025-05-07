#include "Reclamo.h"
#include <queue>
#include <iostream>
using namespace std;

class FuncionesReclamo {
private:
    queue<CReclamo> colaReclamos;

public:
    string ingresarReclamo(CReclamo& reclamo) {
        colaReclamos.push(reclamo);
        return "Reclamo ingresado con éxito!";
    }

    string modificarReclamo(CReclamo& reclamo) {
        string mensaje = "Error al modificar el reclamo";
        if (!colaReclamos.empty()) {
            CReclamo& r = colaReclamos.front();
            r.setTipoReclamo(reclamo.getTipoReclamo());
            r.setDescripcion(reclamo.getDescripcion());
            r.setIdCliente(reclamo.getIdCliente());
            r.setIdPago(reclamo.getIdPago());
            r.setEstado(reclamo.getEstado());
            mensaje = "Reclamo modificado con éxito!";
        }
        return mensaje;
    }

    string eliminarReclamo(int idReclamo) {
        string mensaje = "Error al eliminar el reclamo";
        if (!colaReclamos.empty()) {
            CReclamo& r = colaReclamos.front();
            if (r.getIdReclamo() == idReclamo) {
                colaReclamos.pop();
                mensaje = "Reclamo eliminado con éxito!";
            }
        }
        return mensaje;
    }

};
