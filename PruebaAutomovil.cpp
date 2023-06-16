#include <iostream>
using namespace std;

int main() {
    // Crear un objeto automóvil 
    Automovil automovil();

    // Establecer el nivel de gasolina en 20 litros
    car.setGasLevel(20.0f);

    // Encender las luces del automóvil
    car.turnLightsOn();

    // Establecer la velocidad del automóvil en 150 km/h
    car.setSpeed(150);

    // Obtener y mostrar el nivel de gasolina desde el tablero
    float gasLevel = car.getDashboardGasLevel();
    cout << "Gas level: " << gasLevel << " liters" << endl;

    // Obtener y mostrar la presión de los neumáticos
    for (int i = 0; i < 4; i++) {
        float tirePressure = car.getTirePressure(i);
        cout << "Tire " << i + 1 << " pressure: " << tirePressure << " PSI" << endl;
    }

    return 0;
}
