#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;
int main(){
    LinkedList a(1);
    a.insert(2);
    a.insert(3);
    a.insert(5);
    LinkedList b(3);
    b.insert(4);
    LinkedList c(1);
    c.insert(9);
    c.insert(5);
    c.insert(86);
    c.insert(12);
    c.insert(142);
    c.insert(36);
    c.insert(0);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "Suma de a y b: " << endl;
    cout << a+b << endl<<endl;
    cout << "a = b: " << endl;
    a = b;
    cout << "Nuevo a: "<< a << endl;
    cout << "b = c: " << endl;
    b=c;
    cout << "Nueva b: " << b << endl; 
    //a =b;cout<<a<<endl;
}