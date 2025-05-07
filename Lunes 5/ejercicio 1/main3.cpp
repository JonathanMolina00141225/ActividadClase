#include <iostream>

using namespace std;
int main(){
    int velocidad;

    cout<<"pls insert the speed"<< endl;
    cin>>velocidad;

    if (velocidad >= 80)
    {
        cout<<"your fine is 200$"<< endl;
    }
    else if (velocidad >= 60)
    {
        cout<<"your fine is 100$"<< endl;
    }


return 0;
}