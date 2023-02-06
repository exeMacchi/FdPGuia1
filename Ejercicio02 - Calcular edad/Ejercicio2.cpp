// 2. Hacer un programa que permita ingresar el año actual y el año de la fecha de nacimiento de una persona 
//    y luego calcule y emita por pantalla su edad.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int AA, AN, E;
    cout << "Ingrese el anio actual: ";
    cin >> AA;
    cout << "Ingrese el anio de su nacimiento: ";
    cin >> AN;

    E = AA - AN;

    cout << "\nSu edad es " << E << endl;
    return 0;
}
