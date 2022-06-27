//Axel Jhuan Solis Zamata
#include "nodo.h"
using namespace std;
template <class T>
class Pila{
    private:
        Nodo<T>* extremo;
        int size;
    public:
        Pila(int _size){
            extremo = NULL;   
            size = _size;
        }
        int Size(){
            int cont{0};
            bool stop{false};
            Nodo<T>* aux = extremo;
            if(this->isEmpty()){
                return cont;
            }
            while(stop==false&&this->isEmpty()==false){
                cont++;//Cuenta los elementos.
                if(aux->sgte==nullptr){ //Siguiente elemento es null
                    stop=true;//Detiene el bucle
                }//sino
                aux = aux->sgte;//siguiente elemento
            }
            return cont;
        }
        bool isEmpty(){
            if(extremo==nullptr){
                return true;
            }else{
                return false;
            }
        }
        bool isFull(){
            if(this->Size()==size){
                return true;
            }else{
                return false;
            }
        }
        void top(){
            if(this->isEmpty()==true){
                cout << "La pila esta vacia" << endl;
            }else{
                cout << extremo->datos << endl;
            }
            
        }
        void Push(T x){   
            if(this->isEmpty()==true){   
                extremo = new Nodo<T>;
                extremo->sgte = nullptr;
                extremo->datos=x;
            }else{
                Nodo<T>* aux = new Nodo<T>;
                aux->datos = x;
                aux->sgte = extremo;
                extremo = aux; 
            }
        }
        void Pop(){   
            if(this->isEmpty()==true){   
                cout << "La pila esta vacia"<<endl;
            }else{
                Nodo<T>* aux = extremo;
                cout << aux->datos << " eliminado" << endl;
                extremo=extremo->sgte;
                delete aux; 
            }
        }
        void Clear(){
            while(this->isEmpty()==false){//Mientras no este vacio
                this->Pop();//Elimina el elemento top
            }
            
            cout << "Todos los elementos fueron eliminados" << endl;
        }
       /* void print(){    //Imprime toda la pila
            bool stop{false};
            Nodo<T>* aux = extremo;
            if(extremo==nullptr){
                cout << "La pila esta vacia" << endl;
                return;
            }
            while(stop==false){
                cout << aux->datos << " ";
                if(aux->sgte==nullptr){
                    stop=true;
                }
                aux = aux->sgte;
            }
            cout <<endl;
        }
        */
};


