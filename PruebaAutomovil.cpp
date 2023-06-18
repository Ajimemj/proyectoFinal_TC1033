/*
* Autor: Ana Jimena Mendoza Jasso A01800234
* Proyecto Final - Automóvil
* ARCHIVO DE EJECUCIÓN MAIN
*/

#include "Automovil.h"
#include <iostream>
using namespace std;


int main() {
    Automovil automovil;
    int opcion;

    cout << "Proyecto Final - Pensamiento Computacional Orientado a Objetos" << endl;
    cout << "Alumno: Ana Jimena Mendoza Jasso A01800234" << endl;
    cout << "Carrera: ITD - Ingeniería en Transformación Digital de Negocios";
    do {
        automovil.mostrarTablero ();
        cout << "Opciones:" << endl;;
        cout << "1. Encender/Apagar el auto" << endl;
        cout << "2. Acelerar" << endl;
        cout << "3. Frenar" << endl;
        cout << "4. Prender luces" << endl;
        cout << "5. Apagar luces" << endl;
        cout << "6. Cargar gasolina" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                automovil.encenderApagar ();
                break;
            case 2:
                automovil.acelerar ();
                break;
            case 3:
                automovil.frenar ();
                break;
            case 4:
                automovil.prenderLuces ();
                break;
            case 5:
                automovil.apagarLuces ();
                break;
            case 6: {
                float litros;
                cout << "Ingrese la cantidad de litros a cargar: " << endl;
                cin >> litros;
                automovil.cargarGasolina(litros);
                break;
            }
            case 7:
                cout << "Fin del programa." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 7);

    return 0;
}
