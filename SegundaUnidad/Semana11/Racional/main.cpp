#include <iostream>//Axel Jhuan Solis Zamata
#include "Racional.h"
using namespace std;
int main(){
    
    Racional a(-20,10);
    Racional b,c;
    cin >> b; //sobrecarga >>
    c=a; //Asignacion
    Racional d=b;//copia
    
    cout << "Suma: ";
    cout << a+b << endl;
    cout << endl;
    cout << "Resta: ";
    cout << a-b << endl;
    cout << endl;
    cout << "Multiplicacion: ";
    cout << a*b << endl;
    cout << endl;
    cout << "Division: ";
    cout  << a/b << endl;
    //cut << a+=b;
    system("pause");
    return 0;
}
