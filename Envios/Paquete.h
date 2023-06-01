#ifndef PAQUETE_H
#define PAQUETE_H

#include <iostream>
#include "Envio.h"
using namespace std;


class Paquete : public Envio{
    private:
        float Kilos;
        float costoPorKilo = 10;
    
    public:
        Paquete();
        Paquete(Persona, Persona, float);
        float getKilo();
        void setKilo(float);
        float calculaCosto();
        void imprimirInformacion();    
};
#endif