#include <iostream>
using namespace std;

int main() {
    int intento=1, numero=56, intenton;


    do
    {
            cout<<"Porfavor ingrese un valor del 1 al 100"<<endl;
    cin>>intento;
        if (intento<numero)
        {
                    intenton=intenton + 1;
            cout<<"Su valor es muy bajo"<<endl;
        }
        else if (intento>numero)
        {
                    intenton=intenton + 1;
            cout<<"Su valor es muy alto"<<endl;
        }        
        else if (intento=numero)
        {
    cout<<"Ingreso el numero correcto felicidades!!!!"<<endl;
    return 0;
        }
    } 

    while (intenton = 5);

    cout<<"Ya no tiene mas intentos";

    return 0;

}