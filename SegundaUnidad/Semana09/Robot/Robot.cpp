#include <iostream> //Axel Jhuan Solis Zamata
#include "Robot.h"
#include <random>
#include <sstream>
#include <vector>
using namespace std;
Robot::Robot(string _nombre){
	nombre = _nombre;
}
Robot::~Robot()
{
}
vector<string> Robot::Create(vector<string> &vectornombres,int num){
	bool autenticidad{true};
	string tempstring;
	//Randomizador
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>rand_digits(99,999);
	uniform_int_distribution<char> rand_ascii('A','Z');
	//Protocolo de autenticidad
	stringstream ss{};
	do {
		ss.str("");
		ss << rand_ascii(gen) << rand_ascii(gen) << rand_digits(gen);
		tempstring = ss.str();
		for(int i=0;i!=vectornombres.size();i++){//si el tamaño del vector es 0, no empieza el for
			if(tempstring==vectornombres.at(i)){
				autenticidad=false;
				cout << "No autentico, generando nuevo nombre" << endl;
				break;
			}else{
				autenticidad=true;
			}
		}
	}
	while(autenticidad==false);
	setName(ss.str());
	if(num!=-1){ //-1 significa que está siendo creado por primera vez
		vectornombres.at(num)=tempstring; //Lugar del nombre en el vector de nombres
	}else{
		vectornombres.push_back(tempstring);//Empuja al final el nombre en el vector nombes
	}
	
	return vectornombres;
}
string Robot::Reset(vector<string> &vectornombres,int num){ //Numero de robot
	vectornombres.at(num) = " "; //Elimina el nombre de la lista de nombres. 
	Create(vectornombres,num); //Crea el nombre del robot y coloca el nombre en la posición antigua
	return nombre;
}

void Robot::print(){
	cout << "El nombre del robot es " << nombre << endl;
}