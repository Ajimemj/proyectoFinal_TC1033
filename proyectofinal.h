/*
* Autor: Jimena Mendoza Jasso
A01800234
Situación problema. "Automovil"
TC1033. Pensamiento computacional orientado a objetos
Declaracion/Definición de la CLASES 
*/

class automovil {

private:
    bool encendido_apagado;
    double velocidad;
    static double velocidad_max;

public:
// Define CONSTRUCTOR
    automovil ();

// Define Métodos Accesores 
    bool get_encendido_apagado (void);

// Define Métodos Modificadores Setter
   void set_prende_apaga_auto (bool on_off);
   

// Define Métodos Auxiliares
    void acelerar_auto (void);
    void frenar_auto (void);

};

class tablero {

private:
    bool ind_estado_auto;
    double ind_nivel_porcentaje;
    double ind_velocidad_actual;
    bool ind_luces_on_off;
    bool ind_peligro;
    bool ind_gas_bajo;

public:
// Define CONSTRUCTOR
    tablero ();

// Define Métodos Accesores 


// Define Métodos Modificadores Setter
     

// Define Métodos Auxiliares
    void presenta_tablero ();


};