#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Animal(string _nombre, int _edad) {
        nombre = _nombre;
        edad = _edad;
    }

    // M�todos setters
    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    void setEdad(int _edad) {
        edad = _edad;
    }

    // M�todos getters
    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    // M�todo para mostrar informaci�n del animal
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " a�os" << endl;
    }
};

