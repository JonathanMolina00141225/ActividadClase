#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int menu;
    float Salario = 0, ISSSp = 0, ISSS = 0, AFP = 0, AFPp, Renta = 0, Total = 0, Resultado = 0, Operacio = 0, Rtotal = 0;
    cout << "Porfavor ingresar su salario" << endl;
    cin >> Salario;

    cout << "que desea calcular:" << endl;
    cout << "|------menu------|" << endl;
    cout << "|1.ISSS          |" << endl;
    cout << "|2.AFP           |" << endl;
    cout << "|3.Renta         |" << endl;
    cout << "|4.Total         |" << endl;
    cout << "|5.Salir         |" << endl;
    cout << "|----------------|" << endl;
    cin >> menu;

    switch(menu) {
    case 1:

        if(Salario >= 1000) {
            ISSSp = (Salario * 0.30);
            cout << "Su pago es de:" << ISSS;
        } else if(Salario <= 1000) {
            ISSSp = (Salario * 0.03);
            cout << "Su pago es de:" << ISSS;
        }


        break;
    case 2:
        AFP = 0;
        AFPp = (Salario * 0.0725);
        cout << "Su pago es de:" << AFP;
        break;
    case 3:
        ISSS = 0;
        AFP = 0;
        Renta = 0;
        ISSSp = (Salario * 0.3);
        ISSS = fabs(ISSSp - Salario);

        AFPp = (Salario * 0.0725);
        AFP = fabs(AFPp - Salario);

        if(Salario > 2038.09) {
            Rtotal = (Salario * 0.30);
        }
        else if(895.25 < Salario && Salario >= 2038.09) {
            Rtotal = (Salario * 0.20);
            /*
            cout << "su resultado es:" << Rtotal;
            */
        } 
        else if(472.01 < Salario && Salario >= 895.24) {
            Rtotal = (Salario * 0.10);
            /*
            cout << "su resultado es:" << Rtotal;
            */
        } 
        Renta=fabs(Rtotal-Salario);

        cout << "Su restulado de ISS es:" << ISSS << endl;
        cout << "Su resultado de AFP es:" << AFP << endl;
        cout << "Su resultado de renta es:" << Renta << endl;
    }

    return 0;
}