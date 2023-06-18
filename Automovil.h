/*
* Autor: Ana Jimena Mendoza Jasso A01800234
* Proyecto Final - Automóvil
* Definición / Declaración de las clases: AUTOMÓVIL, TABLERO, TANQUE Y LUCES
*/

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

class Automovil {
private:
    bool encendido;
    int velocidad;
    float nivelGasolina;
    bool lucesEncendidas;

public:
    // Constructor
    Automovil ();
    // Setters
    void cargarGasolina (float litros);
    // Auxiliares
    void encenderApagar ();
    void acelerar ();
    void frenar ();
    void prenderLuces ();
    void apagarLuces ();

    void mostrarTablero () const;
};

class Tablero {
private:
    bool indicadorAltaVelocidad;
    bool indicadorNivelBajoCombustible;

public:
    Tablero ();
    // Muestra estado de las 4 variables de funcionamiento normal
    void mostrarEstado(bool encendido, int velocidad, float nivelGasolina, bool lucesEncendidas) const;
    // Muestra los 2 indicadores de Peligro (alta velocidad y combustible bajo)
    void mostrarIndicadores(bool indicadorAltaVelocidad, bool indicadorNivelBajoCombustible) const;
};

class Tanque {
private:
    float capacidad;
    float nivel;
public:
    // Comstructor
    Tanque(float capacidad);
    // Getter
    float getNivel () const;
    // Auxiliares
    void cargar (float litros);
};

class Luces {
private:
    bool encendidas;
public:
    // Constructor
    Luces();
    // Getter y Setter
    void prender();
    void apagar();
    // Auxiliares
    bool estanEncendidas() const;
};

#endif
