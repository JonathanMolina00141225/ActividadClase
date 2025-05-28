#include <iostream>
using namespace std;

int main() {
    int password=2345, intento;

    do
    {
            cout<<"Porfavor ingrese la contrasena"<<endl;
    cin>>intento;

    if (intento<password )
    {
        cout<<"Su contrasena es incorrecto"<<endl;
    }
    else if (intento>password)
    {
        cout<<"Su contrasena es incorrecto"<<endl;
    }
    
    
    } while (intento != password );

    cout<<"Su contrasena es correcta";
    cout<<"Toma mango";
    
    return 0;
}