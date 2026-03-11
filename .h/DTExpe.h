#include <string>
#include "DTFecha.h"
#include <set>
using namespace std;

class DTExpe {
private:
    string codigoReserva, descripcion;
    DTFecha fecha;
    set<string> turistas;
    DTExpe(); //falta realizar constructor
public:
    string getCodigoReserva();
    string getDescripcion();
    DTFecha getFecha(); // falta completar return de DTFecha
};