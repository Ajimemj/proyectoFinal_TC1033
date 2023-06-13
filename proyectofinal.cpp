/*
* Autor: Ana Jimena Mendoza Jasso
* Implementacion de la clase AUTOMÓVIL 

*/


#include "proyectofinal.h"
#include <iostream>
#include <cmath>
using namespace std; 

//Constructores

automovil::automovil () {
    encendido_apagado = false;  // False = Apagado  True = Encendido
    velocidad = 0;
    velocidad_max = 230;
}
automovil::acelerar_auto () {
    double vel_actual = velocidad;

    // Incrementa Velocidad en 15 km/hr (no se puede pasar de velocidad maxima)
    velocidad = velocidad + 15;
    if (velocidad > velocidad_max) 
        velocidad = velocidad_max;
    
    // Disminuye Gasolina en 0.005 lts * velocidad actual
    

}

tablero::tablero () {
    ind_estado_auto = 
    double ind_nivel_porcentaje;
    double ind_velocidad_actual;
    bool ind_luces_on_off;
    bool ind_peligro;
    bool ind_gas_bajo;

}