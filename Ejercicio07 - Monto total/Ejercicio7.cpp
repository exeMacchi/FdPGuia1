// 7. Una importante cadena de delivery cuenta con una promoción por tiempo limitado en la que otorga un 15% 
//    de descuento sobre el total del valor de la compra realizada. Hacer un programa para solicitar el monto 
//    total y el mismo calcule y emita por pantalla el total a cobrar con el descuento aplicado.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float MT, VT, DT;
    float const D = 15;
    cout << "Valor del producto: $";
    cin >> MT;


    DT = MT * (D / 100);
    VT = MT - DT;

    cout << "Monto total a pagar: $" << VT << endl;
    return 0;
}

