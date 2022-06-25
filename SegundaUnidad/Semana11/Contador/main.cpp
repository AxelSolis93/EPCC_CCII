#include <iostream>//Axel Jhuan Solis Zamata
#include "Contador.h"
using namespace std;
int Contador::contObj=0; //Algo sobre inicializar estaticas.
int main(){
    
    Contador x(0);
    Contador y{0};
    cout << x.valor()<<endl;//Valor actual
    cout << x++ << endl;//Valor antes de sumarle 1. Contador final: 1
    cout << ++x << endl;//Valor luego de sumarle 1. Contador final: 2

    cout << x.valor() << endl;//Valor actual
    for(int i=0;i<10;i++){
        x++; //Cuenta 10 veces
    } 
    cout << x.valor() << endl;//Valor actual
    cout << "Numero obj: " << Contador::contObj <<endl;//Numero de objetos
    system("pause");
    return 0;
}
