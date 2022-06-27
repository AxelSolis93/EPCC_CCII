#include <iostream>//Axel Jhuan Solis Zamata
#include "Pila.h"
using namespace std;
int main(){
    bool cond{false};
    int size{0};
    cout << "Ingrese el tamaño maximo de la pila: " << endl;
    cin>>size;
    Pila<int> P(size); //Inicia la pila
    while(cond==false){
        int e{0};
        cout << "1. Ingresar un numero(PUSH)    2. Mostrar el ultimo elemento   3. Eliminar ultimo elemento(pop)   ";
        cout << "4. Eliminar todos los elementos(clear) "<< endl;
        cout << "5. Numero de elementos(size)   6. Comprobar si la pila esta llena";
        cout << "   7. Comprobar si la pila esta vacia   8. Salir" <<endl;
        cin>>e;
        switch(e){
            case 1:if(P.isFull()==true){cout<<"La pila ya esta llena"<<endl;}else{int x;cout<<"Ingrese el numero: "<<endl;cin>>x;P.Push(x);}break;
            case 2:P.top();break;
            case 3:P.Pop();break;
            case 4:P.Clear();break;
            case 5:cout << "Numero de elementos: " << P.Size()<<endl;break;
            case 6:if(P.isEmpty()==true){cout<<"La pila esta vacia"<<endl;}else{cout<<"La pila no esta vacia"<<endl;}break;
            case 7:if(P.isFull()==true){cout<<"La pila esta llena"<<endl;}else{cout<<"La pila no esta llena"<<endl;}break;
            case 8:cond=true;break;
            //case 9:P.print();break; Imprime toda la pila
            
            default: cout << "Opcion invalida" << endl;break;
        }
    }
    system("pause");
    return 0;
}
