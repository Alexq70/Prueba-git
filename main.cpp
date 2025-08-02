#include "Persona.h"
#include "Animal.h"

int main() {
    Persona p1("Ana", "Gómez", 30, 1.65);
    p1.mostrarDatos();

    Animal miAnimal("Firulais", 5);
    miAnimal.mostrarInformacion();
    return 0;
}
