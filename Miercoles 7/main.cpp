#include <iostream>

using namespace std;
int main()
{
    char letra;
    float nota;
    cout << "Porfavor inserte su nota" << endl;
    cin >> nota;

    if (nota < 0 || nota > 100)
    {
        cout << "Incorrect grade." << endl;
    }
    else
    {
        if (nota > 90)
        {
            letra = 'A';
        }
        else if (90 > nota && nota >= 85)
        {
            letra = 'B';
        }
        else if (85 > nota && nota >= 80)
        {
            letra = 'C';
        }
        else if (80 > nota && nota >= 70)
        {
             letra = 'D';
        }
        else if (70 > nota && nota >= 69)
        {
            letra = 'E';
        }
         else if (nota < 69)
        {
            letra = 'F';
        }

        switch (letra)
        {
        case 'A':
            cout << "Congrants, you are excelten, u got an A";
            break;
        case 'B':
            cout << "Congrants, u'r very good, u got a B";
            break;
        case 'C':
            cout << "Congrants, Do ur best nothing is impossble, u got a C";
            break;
        case 'D':
            cout << "Oh dear, u got a D, keep improving";
            break;
        case 'E':
            cout << "Im sorry honny, ur almost in the death line, u got an E";
            break;
        case 'F':
            cout << "Dear, sometimes i think everybody has talent in differents ways, dont give up, you got a F";
            break;
        default:
            break;
        }
    }

    return 0;
}