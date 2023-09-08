#include <iostream>
#include <cmath>

using namespace std;
int main(){

    float a,b,h,c,d;

    cout <<"Ingrese el cateto a: ";
    cin >> a;

    cout <<"Ingrese el cateto b: ";
    cin >> b;
    c = pow (a,2);d = pow (b,2);

    h=sqrt (c+d);


    cout <<"La hipotenusa es: "<< h << endl;

    system ("pause");
    return (0);

}