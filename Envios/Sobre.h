#ifndef SOBRE_H
#define SOBRE_H

#include <iostream>
#include "Envio.h"
using namespace std;

class Sobre :public Envio{
    public:
        Sobre();
        Sobre(Persona, Persona);
        void imprimirInformacion();
        float calculaCosto();
    private:
        float CostoPorSobre = 10;
};

#endif