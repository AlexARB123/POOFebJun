#include <iostream>
#include "Persona.h"
using namespace std;

Persona :: Persona(){
    nombre = "Jane Doe";
    direccion = "123 Sesame Street";
}

Persona :: Persona(string _nombre, string _direccion){
    nombre = _nombre;
    direccion = _direccion;
}

string Persona :: getNombre(){return nombre;}
string Persona :: getDireccion(){return direccion;}

void Persona :: setNombre(string _nombre){nombre = _nombre;}
void Persona :: setDireccion(string _direccion){direccion = _direccion;}