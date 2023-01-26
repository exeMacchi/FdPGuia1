// 6. Hacer un programa para ingresar por teclado los metros cuadrados totales de un predio y los metros 
//    cuadrados cubiertos; luego calcular y mostrar por pantalla el porcentaje de metros cuadrados cubiertos 
//    y el porcentaje de metros cuadrados descubiertos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int MT, MC, PMC, PMD, MD;
    cout << "Metros cuadrados totales: ";
    cin >> MT;
    cout << "Metros cuadrados cubiertos: ";
    cin >> MC;

    PMC = MC * 100 / MT;
    MD = MT - MC;
    PMD = MD * 100 / MT;

    cout << "\nEl porcentaje de metros cubiertos es del: " << PMC << "%" << endl;
    cout << "El porcentaje de metros descubiertos es del: " << PMD << "%" << endl;
    return 0;
}
