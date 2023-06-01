#ifndef ENVIO_H
#define ENVIO_H

#include <iostream>
#include "Persona.h"
using namespace std;

const float costo = 100;

class Envio {
    public:
        Envio();
        Envio(Persona, Persona);
        virtual float calculaCosto();
        virtual void imprimirInformacion() = 0;
        Persona informacionEnviador();
        Persona informacionRecipiente();
        
    protected:
        float costoDeEnvio = costo;
        Persona enviador;
        Persona recipiente;
};

#endif