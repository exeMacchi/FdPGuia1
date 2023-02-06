// 1. Hacer un programa para solicitar por teclado un número y luego devolver su valor elevado al cubo.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int N1, R;

    cout << "Introduzca un numero: ";
    cin >> N1;

    R = N1 * N1 * N1;

    cout << N1 << " al cubo es " << R << endl;
    return 0;
}
