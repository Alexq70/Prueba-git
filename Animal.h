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

    // Métodos setters
    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    void setEdad(int _edad) {
        edad = _edad;
    }

    // Métodos getters
    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    // Método para mostrar información del animal
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

