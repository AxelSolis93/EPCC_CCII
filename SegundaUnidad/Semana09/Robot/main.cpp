#include <iostream>//Axel Jhuan Solis Zamata
#include <string>
#include <vector>
#include "Robot.h"
using namespace std;
int main(){
    vector<Robot> vectorRobots;
    vector<string> vectornombres{}; //Guarda los nombres
	for (int i=0; i<100; i++)
	{
  	Robot newrobot(""); //Crea un robot sin nombre
  	vectorRobots.push_back(newrobot);  //mete al nuevo robot en la lista de robots
    (vectorRobots.at(i)).Create(vectornombres,-1); //Enciende el robot y le pone un nombre
    cout << "Robot numero " << i+1 << ": ";
    (vectorRobots.at(i)).print(); //Muestra el nombre del robot
	}
    cout << "Reiniciando Robots" << endl;
    for(int i=0;i<vectorRobots.size();i++){//Reiniciar Robots
    (vectorRobots.at(i)).Reset(vectornombres,i); //i es el numero de robot y localización del nombre en el vector nombres
    cout << "Robot numero " << i+1 << ": ";
    (vectorRobots.at(i)).print();
    }

    system("pause");
    return 0;
}
