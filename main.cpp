#include <iostream>
#include <list>
#include <set>
#include <map>

#include "experiencia.h"
#include "alojamiento.h"
#include "eventoCultural.h"
#include "turista.h"
#include "DTExpe.h"
#include "DTFecha.h"
//#include "tourGuiado.h"


using namespace std;

list<Experiencia*> experiencias;
map<string, Experiencia*> map_experiencias;

list<Turista*> turistas;
map<string, Turista*> map_turistas;

void coleccion_guardarExpe(Experiencia* exp){
    experiencias.push_back(exp);
    pair<string, Experiencia*> entry(exp->getCodigoReserva(), exp);
    map_experiencias.insert(entry);
}

void coleccion_guardarTurista(Turista* tur){
    turistas.push_back(tur);
    pair<string, Turista*> entry(tur->getCi(), tur);
    map_turistas.insert(entry);
}

void parte_a(){
    Alojamiento* aloj1 = new Alojamiento("ALX5489", "Hotel moderno", 30, DTFecha(18,5,2020), "Hotel Lindorf", TipoRegimen::AllInclusive, 5);

    Alojamiento* aloj2 = new Alojamiento("ALJ4789 ", "Todas las habitaciones con vista al mar ", 100, DTFecha(10,2,2025), "Hotel SeaView", TipoRegimen::MediaPension, 15);

    coleccion_guardarExpe(aloj1);
    coleccion_guardarExpe(aloj2);
}

void parte_b(){
    /*
    TourGuiado* tour1 = new TourGuiado("TGO4657", "Plazas de Montevideo", 10, DTFecha(29,8,2024), "Paseos SA", {"Plaza Indpendencia", "Plaza Matriz"});

    TourGuiado* tour2 = new TourGuiado("TGR3257", "Puntos emblematicos", 5, DTFecha(29,8,2024), "Recorrer", {"Puerta de la Ciudadela", "Mausoleo", "Cabildo", "Palacio Salvo"});
    
    coleccion_guardarExpe(tour1);
    coleccion_guardarExpe(tour2);
    */
}

void parte_c(){
    EventoCultural* evento = new EventoCultural("ECP1346", "Danza en el Solis", 10, DTFecha(29,10,2025), "Teatro Solis", true);

    coleccion_guardarExpe(evento);
}

void parte_d(){
   
}

void parte_e(){
    Turista* tur1 = new Turista("4.951.278-9", "Vanesa Castro", "vcastro.uy@servidor.net");

    Turista* tur2 = new Turista("1.535.442-0", "Karen Santos", "karen.s89@internet.uy");

    coleccion_guardarTurista(tur1);
    coleccion_guardarTurista(tur2);
}

void parte_f(){
}

void parte_g(){
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
}

void cleanUp(){
}

int main() {
    return 0;
}