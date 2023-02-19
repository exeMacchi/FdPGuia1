// 9. Hacer un programa que permita ingresar por teclado dos números y que luego muestre por pantalla la suma, 
//    la resta, la multiplicación y la división de dichos números. Se deben mostrar cuatro resultados en pantalla. 
//    Los números deben ser solicitados una única vez.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float N1, N2;
    float S, R1, R2, M, D1, D2;

    cout << "Ingrese el primer numero: ";
    cin >> N1;
    cout << "Ingrese el segundo numero: ";
    cin >> N2;

    S = N1 + N2;
    R1 = N1 - N2;
    R2 = N2 - N1;
    M = N1 * N2;
    D1 = N1 / N2;
    D2 = N2 / N1;

    cout << "\nSuma: " << S << endl;
    cout << "Resta primero con el segundo: " << R1 << endl;
    cout << "Resta segundo con el primero: " << R2 << endl;
    cout << "Multiplicacion: " << M << endl;
    cout << "Division primero con el segundo: " << D1 << endl;
    cout << "Division segundo con el primero: " << D2 << endl;
    return 0;
}