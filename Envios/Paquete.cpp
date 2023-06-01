#include <iostream>
#include "Persona.h"
#include "Paquete.h"
using namespace std;

Paquete :: Paquete(){
    Persona e,r;
    enviador = e;
    recipiente = r;
    Kilos = 1;
}

Paquete :: Paquete(Persona p1, Persona p2, float _peso){
    enviador = p1;
    recipiente = p2;
    Kilos = _peso;
}

float Paquete :: getKilo(){return Kilos;}
void Paquete :: setKilo(float _peso){Kilos = _peso;}

void Paquete :: imprimirInformacion(){
    cout << "El enviador es: " << enviador.getNombre() << endl << "Lo manda desde: " << enviador.getDireccion() << endl;
    cout << "El recipiente es: " << recipiente.getNombre() << endl << "El sobre llega a : " << recipiente.getDireccion() << endl;
    cout << "El paquete pesa un total de: " << Kilos << " Kilos" << endl;    
}

float Paquete::calculaCosto(){
    float total = costoDeEnvio + (costoPorKilo * Kilos);
    cout << "El precio total es de: " << total << "$" << endl;
    return total;
}
