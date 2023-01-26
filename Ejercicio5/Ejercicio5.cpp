// 5. Hacer un programa para ingresar por teclado las tres notas de exámenes de un alumno y luego calcule y emita 
//    por pantalla el promedio final.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N1, N2, N3, P;
    cout << "Ingrese la primera nota:" << endl;
    cin >> N1;
    cout << "Ingrese la segunda nota:" << endl;
    cin >> N2;
    cout << "Ingrese la tercera nota:" << endl;
    cin >> N3;

    P = (N1 + N2 + N3) / 3;
    cout << "Promedio del alumno: " << P << endl;
    return 0;
}
