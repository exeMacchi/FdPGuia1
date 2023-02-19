// 3. Hacer un programa que permita ingresar los kilómetros existentes entre dos ciudades y la velocidad promedio 
//    de un vehículo. Calcular y emitir por pantalla el tiempo aproximado que demandará llegar de un punto a otro 
//    teniendo en cuenta los datos ingresados.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float Km, VP, TA;

    cout << "Ingrese la distancia entre las dos ciudades: ";
    cin >> Km;
    cout << "Ingrese su velocidad promedio (km/h): ";
    cin >> VP;

    TA = Km / VP;

    cout << "\nTiempo aproximado de viaje: " << TA << " horas" << endl;
}
