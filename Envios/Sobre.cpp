#include <iostream>
#include "Sobre.h"
#include "Persona.h"

Sobre :: Sobre(){
    Persona e,r;
    enviador = e;
    recipiente = r;
}

Sobre :: Sobre(Persona p1, Persona p2){
    enviador = p1;
    recipiente = p2;
}

void Sobre :: imprimirInformacion(){
    cout << "El enviador es: " << enviador.getNombre() << endl << "Lo manda desde: " << enviador.getDireccion() << endl;
    cout << "El recipiente es: " << recipiente.getNombre() << endl << "El sobre llega a : " << recipiente.getDireccion() << endl;    
}

float Sobre ::  calculaCosto(){
    float total = CostoPorSobre + costoDeEnvio;
    cout << "El costo del sobre es de: " << total << "$" << endl;
    return total;
}