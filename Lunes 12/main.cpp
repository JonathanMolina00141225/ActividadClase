#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float Billetera = 100, Restante = 0;
    int Menu = 0, Manana = 0, Tarde = 0;
    cout << "========================================" << endl;
    cout << "1.Menu de mañana" << endl;
    cout << "2.Menu de la tarde" << endl;
    cout << "3.Cajita feliz" << endl;
    cout << "4. Salir" << endl;
    cout << "Hola, que menu desea visualizar" << endl;
    cout << "========================================" << endl;
    cin >> Menu;

    switch (Menu)
    {
    case 1:
        /*float Mac = 3, Mini = 3.75, Jugo = 1.25, papas = 2;*/
        cout << "Mac Moffin 3$" << endl;
        cout << "Mini pekka 3.75$" << endl;
        cout << "Jugo de naranja 1.25$" << endl;
        cout << "papas 2$" << endl;
        cin >> Manana;
        switch (Manana)
        {
        case 1:
            cout << "Usted selecciono Mac Moffin " << endl;
            Restante = (3 - Billetera);
            cout << "Su saldo restante es de:" << Restante << endl;
            break;
        case 2:
            cout << "Usted selecciono Mini pekka " << endl;
            Restante = (3.75 - Billetera);
            cout << "Su saldo restante es de:" << Restante << endl;
            break;
        case 3:
            cout << "Usted selecciono Jugo de naranja" << endl;
            Restante = (1.25 - Billetera);
            cout << "Su saldo restante es de:" << Restante << endl;
            break;
        case 4:
            cout << "Usted selecciono papas " << endl;
            Restante = (2 - Billetera);
            cout << "Su saldo restante es de:" << Restante << endl;
            break;

        default:
            break;
        }
        break;
    case 2:
        /*float Mac = 6, Mini = 8.75, Jugo = 3.25, papas = 2 ;*/
        cout << "Cuarto de Libra Doble 6$" << endl;
        cout << "McNifica de Res Doble 8.75$" << endl;
        cout << "Quesoburguesa 3.25$" << endl;
        cout << "papas 2$" << endl;
        cin >> Tarde;
        switch (Tarde)
        {
        case 1:
            cout << "Usted selecciono Cuarto de Libra Doble " << endl;
            Restante = (6 - Billetera);
            cout << "Su saldo restante es de:" << Restante << endl;
            break;
        case 2:
            cout << "Usted selecciono McNifica de Res Doble " << endl;
            Restante = (8.75 - Billetera);
            cout << "Su saldo restante es de:" << Restante << endl;
            break;
        case 3:
            cout << "Usted selecciono Quesoburguesa" << endl;
            Restante = (3.25 - Billetera);
            cout << "Su saldo restante es de:" << Restante << endl;
            break;
        case 4:
            cout << "Usted selecciono papas" << endl;
            Restante = (2 - Billetera);
            cout << "Su saldo restante es de:" << Restante << endl;
            break;
        }
        break;
    case 3:
        int edad;
        float cajita;

        cout << "ingrese su edad" << endl;
        cin >> edad;

        if (edad > 0 && edad <= 7)
        {
            Restante = (5.49 - Billetera);
            cout << "Usted puede comprar la cajita de feliz" << endl;
            cout << "Su saldo restante es de:" << Restante << endl;
        }
        else if (edad > 7 && edad <= 14)
        {
            cajita = 5.49*2;
            if (cajita >= Billetera)
            {
                cout << "No se puede realizar su compra por saldo insuficiente" << endl;
                return 0;
            }

            Restante = (cajita - Billetera);
            cout << "Usted puede comprar la cajita pero el valor sera del doble" << endl;
            cout << "Su saldo restante es de:" << Restante << endl;
        }
        else if (edad > 14 && edad <= 18)
        {
            cajita = 5.49*3;
            if (cajita >= Billetera)
            {
                cout << "No se puede realizar su compra por saldo insuficiente" << endl;
                return 0;
            }
            Restante = (cajita - Billetera);
            cout << "Usted puede comprar la cajita pero el valor sera del triple" << endl;
            cout << "Su saldo restante es de:" << Restante << endl;
        }
        else if (edad > 18 && edad <= 80)
        {
            Restante = (cajita - Billetera);
            cout << "Usted no puede comprar la cajita 'ya esta ruco mijo' " << endl;
            cout << "Su saldo restante es de:" << Restante << endl;
        }
        else if (cajita > 100)
        {
            cout << "No tiene suficiente saldo para realizar la compra" << endl;
        }

        break;
    case 4:
        cout << "Muchas gracias vuelva pronto" << endl;
        return 0;
        break;

    default:
        cout << "Porfavor ingrese un valor correcto" << endl;
        break;
    }

    return 0;
}