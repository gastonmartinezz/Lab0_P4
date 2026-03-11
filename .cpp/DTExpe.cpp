#include ".h/DTExpe.h"

string DTExpe::getCodigoReserva() {
    return this->codigoReserva;
}

string DTExpe::getDescripcion() {
    return this->descripcion;
}

DTFecha DTExpe::getFecha() {
    int dia = this->fecha.getDia();
    int mes = this->fecha.getMes();
    int anio = this->fecha.getAnio();

    //return dia, mes anio;
}