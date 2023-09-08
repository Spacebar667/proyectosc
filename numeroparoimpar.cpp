#include  <iostream>    
using namespace std;

int main ()
{
    int numero1 = 0;

    cout <<"Ingrese un numero: ";
    cin>>numero1;

    if (numero1 % 2 == 0) {
        
        cout <<"El numero es par"<<endl;
    }else
    {
        cout<<"El numero es impar"<<endl;
    }
    return 0;
}