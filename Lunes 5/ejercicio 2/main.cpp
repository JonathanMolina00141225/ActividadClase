#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int menu;
    float Salario, ISSS, AFP, Renta, Total, Resultado, Operacio, Rtotal;
    cout << "Porfavor ingresar su salario" << endl;
    cin >> Salario;

    cout << "que desea calcular:" << endl;
    cout << "/------menu------/" << endl;
    cout << "|1.ISSS          |" << endl;
    cout << "|2.AFP           |" << endl;
    cout << "|3.Renta         |" << endl;
    cout << "|4.Total         |" << endl;
    cout << "|5.Salir         |" << endl;
    cout << "/----------------/" << endl;
    cin >> menu;

    switch (menu)
    {
    case 1:
        ISSS = 0;
        if (Salario <= 1000)
        {
            ISSS = Salario * 0.3;
            cout << "Su resultado es:" << ISSS;
        }
        ISSS = 30;
        break;
    case 2:
        AFP = 0;
        AFP = (Salario * 0.0725);
        cout << "Su resultado es:" << AFP;
        break;
    case 3:
        ISSS = 0;
        AFP = 0;
        Renta = 0;
        ISSS = (Salario * 0.3);
        AFP = (Salario * 0.0725);
        Renta = (ISSS - AFP);
        if (472.01 < Renta <= 895.24)
        {
            Rtotal = (Renta * 0.01);
            cout << "su resultado es:" << Rtotal;
        }
        else if (895.25 < Renta <= 2038.09)
        {
            Rtotal = (Renta * 0.02);
            cout << "su resultado es:" << Rtotal;
        }
        else if (2038.10 < Renta)

        {
            Rtotal = (Renta * 0.03);
            cout << "su resultado es:" << Rtotal;
        }
    }

    return 0;
}