#include <iostream>
#include "Persona.h"
#include "Envio.h"
using namespace std;

Envio :: Envio(){
    Persona p1,p2;
    enviador = p1;
    recipiente = p2;
};

Envio :: Envio(Persona _e, Persona _r){
    enviador = _e;
    recipiente = _r;
}

float Envio :: calculaCosto(){
    cout << "El costo es de: " << costoDeEnvio << "$" << endl;
    return costoDeEnvio;
}

Persona Envio :: informacionRecipiente(){return recipiente;}
Persona Envio :: informacionEnviador(){return enviador;}