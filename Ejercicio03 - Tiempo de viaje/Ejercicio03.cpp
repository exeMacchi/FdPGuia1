// 3. Hacer un programa que permita ingresar los kil�metros existentes entre dos ciudades y la velocidad promedio 
//    de un veh�culo. Calcular y emitir por pantalla el tiempo aproximado que demandar� llegar de un punto a otro 
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
