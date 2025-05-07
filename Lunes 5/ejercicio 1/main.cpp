#include <iostream>

using namespace std;
int main(){
    int vehiculo, velocidad, r1;

    cout<<"pls insert the speed"<< endl;
    cin>>velocidad;

    cout<<"pls insert the car, moto=1, kia soul=2 o ruta44=3"<< endl;
    cin>>r1;

    if (r1==1 && velocidad >= 80)
    {
        cout<<"your fine is 1000$"<< endl;
    }
    else if (r1==1 && velocidad >= 60)
    {
        cout<<"your fine is 100$"<< endl;
    }
    else if (r1==2 && velocidad >=90)
    {
        cout<<"your fine is 1111$"<< endl;
    }
    else if (r1==2 && velocidad >=70)
    {
        cout<<"your fine is 200$"<< endl;
    }
    else if (r1==3 && velocidad >=100)
    {
        cout<<"your fine is 3000$ "<< endl;
    }
    else if (r1==3 && velocidad >=80 )
    {
        cout<<"your fine is 1500$"<< endl;
    }

return 0;
}
