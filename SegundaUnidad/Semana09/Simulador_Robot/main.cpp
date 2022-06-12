#include <iostream>//Axel Jhuan Solis Zamata
#include "Robot.h"
#include <string>
#include <tuple>
using namespace std;
int main(){
    string movimientos;
    int orient=0;//0 norte, 1 este, 2 sur, 3 oeste
    cout << "Indique Movimiento: " << endl;
    cin>>movimientos;
    Robot r1= Robot(7,3,orient); //Inicia el robot en el centro y mirando hacia el norte
    r1.Mover(movimientos);
    r1.print();

    system("pause");
    return 0;
}
