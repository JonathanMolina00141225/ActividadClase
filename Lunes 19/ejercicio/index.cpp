#include <iostream>
using namespace std;

int main() {
   int N[22]={1,4,6,7,20,44,55,66,77,88,99,0,11,444,555,666,777,888,999,111,222,333};
   int Usu= N[0];

   cout<<"Porfavor ingrese 3 digitos que desea buscar"<<endl;
   
   cin>>Usu;
   
   for (int i = 0; i < 1; i++)
   {
    if (i<=Usu)
    {
        cout<<"Se pudo encontrar su valor"<< i << endl;
    }
    else if (i<=Usu)
    {
        cout<<"No se pudo encontrar su valor"<< i << endl;
    }
    
    
   }
   
    return 0;
}