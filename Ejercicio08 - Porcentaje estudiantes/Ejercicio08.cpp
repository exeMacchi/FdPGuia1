// 8. Una universidad desea conocer los porcentajes de mujeres y hombres en las carreras de ciencias exactas. 
//    Se solicita un programa para cargar la cantidad de mujeres y la cantidad de hombres y que el mismo 
//    calcule y emita por pantalla los porcentajes correspondientes.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int CH, CM, TA, PH, PM;
    cout << "Indique la cantidad de alumnos: ";
    cin >> CH;
    cout << "Indique la cantidad de alumnas: ";
    cin >> CM;

    TA = CH + CM;
    PH = CH * 100 / TA;
    PM = CM * 100 / TA;

    cout << "\nPorcentaje de hombres en la carrera: " << PH << "%." << endl;
    cout << "Porcentaje de mujeres en la carrera: " << PM << "%." << endl;
    return 0;
}