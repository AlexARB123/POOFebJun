#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona{
    private:
        string nombre;
        string direccion;
    public:
        Persona();
        Persona(string, string);
        void setNombre(string);
        void setDireccion(string);
        string getNombre();
        string getDireccion();
};

#endif