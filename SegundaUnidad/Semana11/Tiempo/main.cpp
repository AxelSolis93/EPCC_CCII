#include <iostream>//Axel Jhuan Solis Zamata
#include "Date.h"
using namespace std;
int main(){
    
    Date x(12,45,30);
    Date y(0,30,35);
    Date a(2,20,20);
    Date b(2,20,20);
    Date c(2,20,10);
    Date d(1,56,20);
    
    cout << "Suma de ("<<x << ") y (" << y << ") es (" << x+y << ")" << endl; 
    cout << "Resta de ("<<c << ") y (" << d << ") es (" << c-d << ")"<<endl;
    if(a==b){//igualdad
        cout << "("<< a << ") y (" << b <<  ") son iguales" << endl;
    }else{
        cout << "(" << a << ") y (" << b <<  ") no son iguales" << endl;
    }
    if(a!=d){//no igual
        cout << "(" << a << ") y (" << d << ") no son iguales" << endl;
    }else{
        cout << "(" << a << ") y (" << d <<  ") son iguales" << endl;
    }
    if(c<b){//menor
        cout << "(" << c << ") es menor que (" << b << ")" << endl;
    }else{
        cout << "(" << c << ") no es menor que (" << b <<  ")" << endl;
    }
    if(c<=a){//menor igual
        cout << "(" << c << ") es menor o igual que (" << a << ")" << endl;
    }else{
        cout << "(" << c << ") no es menor o igual que (" << a <<  ")" << endl;
    }
    if(c>b){//mayor
        cout << "(" << c << ") es mayor que (" << b << ")" << endl;
    }else{
        cout << "(" << c << ") no es mayor que (" << b <<  ")" << endl;
    }
    if(c>=a){//Mayor o igual
        cout << "(" << c << ") es mayor o igual que (" << a << ")" << endl;
    }else{
        cout << "(" << c << ") no es mayor o igual que (" << a <<  ")" << endl;
    }

    system("pause");
    return 0;
}
