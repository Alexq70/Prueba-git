#include <iostream>
#include <string>
#include <iomanip> // Para std::setprecision

using namespace std;

class Persona {
private:
    string nombre;
    string apellido;
    int edad;
    double altura;

public:
    // Constructor
    Persona(string nom, string ape, int ed, double alt) {
        nombre = nom;
        apellido = ape;
        edad = ed;
        altura = alt;
    }

    // Getters
    string getNombre() const { return nombre; }
    string getApellido() const { return apellido; }
    int getEdad() const { return edad; }
    double getAltura() const { return altura; }

    // Setters
    void setNombre(string nom) { nombre = nom; }
    void setApellido(string ape) { apellido = ape; }
    void setEdad(int ed) { edad = ed; }
    void setAltura(double alt) { altura = alt; }

    // Método para mostrar los datos
    void mostrarDatos() const {
        cout << "Nombre: " << nombre << " " << apellido << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << fixed << setprecision(2);
        cout << "Altura: " << altura << " metros" << endl;
    }
};

