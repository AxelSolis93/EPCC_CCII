#include <iostream> //Axel Jhuan Solis Zamata
#include "Robot.h"
#include <tuple>
using namespace std;
Robot::Robot(int _x, int _y, int _orient){
	x = _x;
	y = _y;
	orient = _orient;
}
Robot::~Robot()
{
}
tuple<int,int,int> Robot::Mover(string movimientos){
	for(char &c : movimientos){
		if(c=='A'){
			if(orient==0||orient==2){
				y++;//avanzar arriba, abajo
			}else if(orient==1||orient==3){
				x++;//avanzar derecha, izquierda 
			}
			
		}else if(c=='D'){
			if(orient<4){
				orient++;
			}else if(orient==4){
				orient=1; //reinicia y agrega uno por la instruccion derecha
			}
		}else if(c=='I'){
			if(orient!=0){
				orient--;
			}else if(orient==0){
				orient=3; //reinicia a 3;
			}
		}
	}	
	
	return make_tuple(x,y,orient);
}

void Robot::print(){
	cout << "La nueva posición del robot es (" << x << "," << y << ") mirando hacia el ";
	if(orient==0){
		cout << "Norte" << endl;
	}else if(orient ==1){
		cout << "Este" << endl;
	}else if(orient==2){
		cout << "Sur" << endl;	
	}else if(orient==3){
		cout << "Oeste" << endl;
	}
}