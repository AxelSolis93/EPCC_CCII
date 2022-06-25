#pragma once
#include <iostream> //Axel Jhuan Solis Zamata
class Contador{
	private:
		int inic;
	public:
		static int contObj;
		Contador(int _inic=0){
			inic = _inic;
			contObj=contObj+1; //Suma uno al contador de objetos cada vez que se inicie el constructor.
			//std::cout<<"Llamado " << std::endl;
		};
		~Contador(){};
		int operator++(){ 
			inic=inic+1;
			return inic;
		};
		int operator++(int){
			int _x =inic;
			inic = inic+1;
			return _x; //retorna la variable antes de ser incrementada
		};
		int valor(){
			return inic;
		}
		
		
};
