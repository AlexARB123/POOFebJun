#include <iostream>
#include "Persona.h"
#include "Envio.h"
#include "Sobre.h"
#include "Paquete.h"
using namespace std;

int main(){
    
    Persona p1,p2("Forrest","Bosque"),p3("Link", "Hateno"), p4("Zelda", "Hyrule");
    
    Envio *envios[5];
    
    envios[0] = new Sobre(p3,p4);
    envios[1] = new Sobre();
    envios[2] = new Paquete();
    envios[3] = new Sobre(p1,p2);
    envios[4] = new Paquete(p3,p4,12.5);

    int costoFinal = 0;

    for(int i = 0; i < 5; i++)
    {
        Envio *current = envios[i];
        current->imprimirInformacion();
        costoFinal = costoFinal + current->calculaCosto();
        cout << endl << "**************************" << endl;
    }

    cout << "Costo final es de " << costoFinal << "$" << endl;

}