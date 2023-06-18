
/*
* Autor: Ana Jimena Mendoza Jasso
* Matricula: A080234
Situación Problema Programacion orientada a Objetos 
- Automóvil -

Implementación de las clases
*/

#include "Automovil.h"
#include <iostream>
using namespace std;

// MÉTODOS DE LA CLASE AUTOMÓVIL
// Constructor. 
// EL automóvil inicia Apagado, Con velocidad 0, Con tanque lleno y con Luces Apagadas
Automovil::Automovil() : encendido(false), velocidad(0), nivelGasolina(42), lucesEncendidas(false) {}

void Automovil::encenderApagar() {
    encendido = !encendido;
}

void Automovil::acelerar() {
    // Solo puede acelerar si el auto está encendido y tiene gasolina
    // Al acelerar, la velocidad se incrementa en 15 km /hr (hasta un máximo de 230 km /hr) 
    //     y el nivel de gasolina se disminuye en 0.005 * velocidad (hasta un minimo de 0)
    if (encendido && nivelGasolina > 0) {
        velocidad = velocidad + 15;
        if (velocidad > 230) velocidad = 230;
        nivelGasolina = nivelGasolina - (0.005 * velocidad);
        if (nivelGasolina < 0 ) nivelGasolina = 0;
    }
}

void Automovil::frenar() {
    velocidad = velocidad - 25;
    if (velocidad < 0)
        velocidad = 0;
}

void Automovil::prenderLuces() {
    lucesEncendidas = true;
}

void Automovil::apagarLuces() {
    lucesEncendidas = false;
}

void Automovil::cargarGasolina(float litros) {
    // Verifica que los litros a cargar sean positivos y que no exceda la capacidad del tanque
    if (litros > 0 && litros <= (42 - nivelGasolina))
        nivelGasolina = nivelGasolina + litros;
}

void Automovil::mostrarTablero() const {
    Tablero tablero;
    // Muestra los 4 indicadores de Estado del Automóvil
    tablero.mostrarEstado(encendido, velocidad, nivelGasolina, lucesEncendidas);
    // Muestra los 2 indicadores de Peligro - Alta Velocidad y Nivel de Gasolina Bajo
    tablero.mostrarIndicadores(velocidad > 160, (nivelGasolina / 42) * 100 < 15);
}


// MÉTODOS DE LA CLASE TABLERO 
Tablero::Tablero() : indicadorAltaVelocidad(false), indicadorNivelBajoCombustible(false) {}

// El tablero tiene Estado (4 variables) e Indicadores (2 Advertencias)
// Muestra Estado del Automóvil
void Tablero::mostrarEstado(bool encendido, int velocidad, float nivelGasolina, bool lucesEncendidas) const {
    cout << "Estado del Automóvil: " << (encendido ? "Encendido" : "Apagado") << endl;
    cout << "Velocidad: " << velocidad << " km/hr" << endl;
    cout << "Nivel de Combustible: " << (nivelGasolina / 42) * 100 << "%" << endl;
    cout << "Luces: " << (lucesEncendidas ? "Encendidas" : "Apagadas") << endl;
}
// Muestra Indicadores del Automóvil
void Tablero::mostrarIndicadores(bool indicadorAltaVelocidad, bool indicadorNivelBajoCombustible) const {
    cout << "Indicador de Alta Velocidad: " << (indicadorAltaVelocidad ? "Encendido" : "Apagado") << endl;
    cout << "Indicador de Nivel Bajo de Combustible: " << (indicadorNivelBajoCombustible ? "Encendido" : "Apagado") << endl;
}

// MÉTODOS DE LA CLASE TANQUE
Tanque::Tanque(float capacidad) : capacidad(capacidad), nivel(capacidad) {
}
float Tanque::getNivel() const {
    return nivel;
}
void Tanque::cargar(float litros) {
    // Verifica que la cantidad de gasolina a cargar sea positiva y que no se desborde
    if (litros > 0 && litros <= (capacidad - nivel))
        nivel =  nivel + litros;
}

// MÉTODOS DE LA CLASE LUCES
Luces::Luces() : encendidas(false) {
}
void Luces::prender() {
    encendidas = true;
}
void Luces::apagar() {
    encendidas = false;
}
bool Luces::estanEncendidas() const {
    return encendidas;
};
