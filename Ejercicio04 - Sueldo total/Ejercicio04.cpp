// 4. Una casa de computación paga a sus empleados un sueldo fijo de ARS15000 más una comisión del 5% sobre el 
//    total facturado por cada empleado. Hacer un programa para ingresar el total facturado por un empleado y 
//    que luego calcule y emita por pantalla el sueldo total a cobrar por el mismo.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    float TF, ST;
    float const SF = 15000;
    float const C = 0.05;

    cout << "Cuanto vendiste?: ";
    cin >> TF;

    ST = SF + (TF * C);

    cout << "\nTu salario neto es: $" << ST << endl;
    return 0;
}
