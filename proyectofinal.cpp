
/*
* Autor: Ana Jimena Mendoza Jasso
* Matricula: A080234
Situación Problema Programacion orientada a Objetos 
- Automóvil -

Implementación de las clases
*/

// #include "Automovil.h"
#include <iostream>
#include <cmath>
using namespace std;

class Llanta {
private:
    float presion;
 //   const float Presion_baja = 30.0f;
 //   const float Presion_inicial = 33.0f;

public:
    // Constructor
    Llanta () {
        presion = 33.0f;
    };

    //Getter
    float getPresion () {
        return presion;
    }

    // Setter
    void setPresion (float presionLlanta) {
        presion = presionLlanta;
    }

    //Auxiliares
    bool PresionBaja () {
        if (presion < 30.0f) {
            return true;
        }
        else {
            return false;
        }
    }
};

//-------------------------------------//
class Tanque {
private:
    //const float capacidad = 42.0f;
    float nivel;
    
public:
    // Constructor - El automovil inicia con tanque lleno
    Tanque () {
        nivel = 42.0f;
    }
     // Define Metodos ACCESORES 
     //     Getter
     float getNivel () {
        return nivel;
     }
     //     Setter
    void setNivel (float nuevoNivel) {
        nivel = nuevoNivel;
    }

    // Define Métodos AUXILIARES 
    //void cargar_gas (float litros);
    //void calc_nivel_indicador (float litros);
    //void calc_nivel_bajo (float litros);
};

//-------------------------------------//
class Luces {
private:
    bool luces_on_off;
public:
    // Constructor - El automovil inicia con luces apagadas
    Luces () {
        luces_on_off = false;
    }
    void Encender () {
        luces_on_off = true;
    }
    void Apagar () {
        luces_on_off = false;
    }
    bool get_luces_on_off (void) {
        return luces_on_off;
    }
};

//-------------------------------------//
class Tablero {
//private:
  
    
public:
    void muestraEstadoAuto (bool encendido) {
        cout <<  "Estado del auto:  ";
        if (encendido) {
            cout << "Encendido" << endl;
        }
        else {
            cout << "Apagado" << endl;
        }
    }
    void muestraVelocidad (float velocidad, float vel_max) {
        cout << "Velocidad:     " << velocidad << " km/h" << endl;
        if (velocidad > vel_max) {
            cout << "Peligro! Alta velocidad" << endl;
        }
    }
    void muestraNivelGas (float nivel, float capacidad) {
        float porcentaje;
        porcentaje = nivel / capacidad;
        cout << "Nivel de gasolina:  " << porcentaje << " %";
        if (nivel < (capacidad * .15)) {
            cout << "Nivel de Gasolina Bajo" << endl;
        }
    }
    void muestraLuces (bool luces_onoff) {
        cout << "Luces:       ";
        if (luces_onoff == true)
            cout << "Encendidas" << endl;
        else
            cout << "Apagadas" << endl;

    }
    /*
    void muestraLlantaBaja (int indiceLlanta) {
        if (llantas[indiceLlanta]->PresionBaja()) {
            cout << "Llanta ", indiceLlanta + 1 << " con presion baja!" << endl;
        }
    }
    */
};

//-------------------------------------//
class Automovil {
private:
    bool estado_encendido;
    float velocidad;
    //const float velocidad_max = 230;

    Llanta* llantas[4];
    Tablero tablero;
    Tanque tanque;
    Luces luces;
public: 
    // Define Método CONSTRUCTOR- EL automovil inicia apagado, inicializa llantas
    Automovil () {
        estado_encendido = false;
        for (int i =0; i < 4; i++) {
            llantas[i]= new Llanta ();
        }
    };

    // Define Metodos ACCESORES 

    // Define Métodos AUXILIARES
    void encender_apagar (bool estado) {
        estado_encendido = estado;
    }
    void set
   // void acelerar (void);
   // void frenar (void);
};
