#include <iostream> //Axel Jhuan Solis Zamata
#include "Cadena.h"
#include "Domino.h"
#include <tuple>
using namespace std;
Cadena::Cadena(){
}
Cadena::~Cadena()
{
}
void Cadena::Create(Domino a, Domino b, Domino c){
	bool posible{false};
	//Seccion A, primera y tercerda ficha como extremos
	if(get<0>(a.GetValues())==get<1>(c.GetValues())){//get<i> agarra el i valor de la tuple y (a.getvalue) ejecuta la funcion getvalue, retornando una tuple
		//si el primer valor de a es igual al ultimo de c
		if(get<1>(a.GetValues())==get<0>(b.GetValues()) && get<1>(b.GetValues())==get<0>(c.GetValues())){//Si el segundo valor de la primera ficha es igual al primero de la segunda  && el segundo valor de la segunda ficha es igual al primero de la tercera
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  "; 
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << endl;//sin voltear fichas
			posible=true;
		}else if(get<1>(a.GetValues())==get<1>(b.GetValues()) && get<0>(b.GetValues())==get<0>(c.GetValues())){
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  "; 
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//ficha volteada
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << endl;
			posible=true;
		}
	}
	if(get<0>(a.GetValues())==get<0>(c.GetValues())){//volteando la tercerda ficha
		if(get<1>(a.GetValues())==get<0>(b.GetValues()) && get<1>(b.GetValues())==get<1>(c.GetValues())){
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << endl;//ficha volteada
			posible=true;
		}else if(get<1>(a.GetValues())==get<1>(b.GetValues()) && get<0>(b.GetValues())==get<1>(c.GetValues())){//volteando ficha del medio
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//ficha volteada
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << endl;//ficha volteada
			posible=true;
		}
	}
	
	if(get<1>(a.GetValues())==get<1>(c.GetValues())){//volteando la primera ficha
		if(get<0>(a.GetValues())==get<0>(b.GetValues()) && get<1>(b.GetValues())==get<0>(c.GetValues())){
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//ficha volteada
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << endl;//ficha volteada
			posible=true;
		}else if(get<1>(a.GetValues())==get<1>(b.GetValues()) && get<0>(b.GetValues())==get<1>(c.GetValues())){//volteando ficha del medio
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//ficha volteada
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//ficha volteada
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << endl;
			posible=true;
		}
	}

	if(get<1>(a.GetValues())==get<0>(c.GetValues())){//Volteando la primera y tercera ficha
		if(get<0>(a.GetValues())==get<0>(b.GetValues()) && get<1>(b.GetValues())==get<1>(c.GetValues())){
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//ficha volteada
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << endl;//ficha volteada
			posible=true;
		}else if(get<0>(a.GetValues())==get<1>(b.GetValues()) && get<0>(b.GetValues())==get<1>(c.GetValues())){//volteando ficha del medio
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//ficha volteada
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//ficha volteada
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << endl;//ficha volteada
			posible=true;
		}
	}	
	//Seccion B, primera y segunda ficha como extremos. 
	if(get<0>(a.GetValues())==get<1>(b.GetValues())){
		//si el primer valor de a es igual al ultimo de b
		if(get<1>(a.GetValues())==get<0>(c.GetValues()) && get<1>(c.GetValues())==get<0>(b.GetValues())){
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  "; 
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << endl;
			posible=true;
		}else if(get<1>(a.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<0>(b.GetValues())){//Ficha del medio volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  "; 
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  "; //ficha volteada
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << endl;
			posible=true;
		}
		
	}
	if(get<1>(a.GetValues())==get<1>(b.GetValues())){ //Volteando la primera ficha
		if(get<0>(a.GetValues())==get<0>(c.GetValues()) && get<1>(c.GetValues())==get<0>(b.GetValues())){
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  "; //ficha volteada
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << endl;
			posible=true;
		}else if(get<0>(a.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<0>(b.GetValues())){//Ficha del medio volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  "; //ficha volteada
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  "; //ficha volteada
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << endl;
			posible=true;
		}
		
	}
	if(get<0>(a.GetValues())==get<0>(b.GetValues())){//Volteando la tercera ficha
		if(get<1>(a.GetValues())==get<0>(c.GetValues()) && get<1>(c.GetValues())==get<1>(b.GetValues())){
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  "; 
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << endl;
			posible=true;
		}else if(get<1>(a.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<1>(b.GetValues())){//Ficha del medio volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  "; 
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  "; //ficha volteada
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << endl;//ficha volteada
			posible=true;
		}
		
	}
	if(get<1>(a.GetValues())==get<0>(b.GetValues())){//Volteando la primera y tercera ficha
		if(get<0>(a.GetValues())==get<0>(c.GetValues()) && get<1>(c.GetValues())==get<1>(b.GetValues())){
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  "; //ficha volteada
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << endl;//ficha volteada
			posible=true;
		}else if(get<0>(a.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<1>(b.GetValues())){//Ficha del medio volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  "; //ficha volteada
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  "; //ficha volteada
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << endl;//ficha volteada
			posible=true;
		}
		
	}	
	
	//Seccion C, segunda y tercera ficha como extremos.
	if(get<0>(b.GetValues())==get<1>(c.GetValues())){
		if(get<1>(b.GetValues())==get<0>(a.GetValues()) && get<1>(a.GetValues())==get<0>(c.GetValues())){
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << endl;
			posible=true;	
		}else if(get<1>(b.GetValues())==get<1>(a.GetValues()) && get<0>(a.GetValues())==get<0>(c.GetValues())){
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << endl;
			posible=true;	
		}
	}
	if(get<1>(b.GetValues())==get<1>(c.GetValues())){ //Primera ficha volteada
		if(get<0>(b.GetValues())==get<0>(a.GetValues()) && get<1>(a.GetValues())==get<0>(c.GetValues())){
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << endl;
			posible=true;	
		}else if(get<0>(b.GetValues())==get<1>(a.GetValues()) && get<0>(a.GetValues())==get<0>(c.GetValues())){
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << endl;
			posible=true;	
		}
	}
	if(get<0>(b.GetValues())==get<0>(c.GetValues())){//Tercera ficha volteada
		if(get<1>(b.GetValues())==get<0>(a.GetValues()) && get<1>(a.GetValues())==get<1>(c.GetValues())){
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}else if(get<1>(b.GetValues())==get<1>(a.GetValues()) && get<0>(a.GetValues())==get<1>(c.GetValues())){
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}
	}
	if(get<1>(b.GetValues())==get<0>(c.GetValues())){//Primera y tercera ficha volteada
		if(get<0>(b.GetValues())==get<0>(a.GetValues()) && get<1>(a.GetValues())==get<1>(c.GetValues())){
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}else if(get<0>(b.GetValues())==get<1>(a.GetValues()) && get<0>(a.GetValues())==get<1>(c.GetValues())){
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}
	}
	//Seccion D: BCA

	if(get<0>(b.GetValues())==get<1>(a.GetValues())){
		if(get<1>(b.GetValues())==get<0>(c.GetValues()) && get<1>(c.GetValues())==get<0>(a.GetValues())){
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << endl;
			posible=true;	
		}else if(get<1>(b.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<0>(a.GetValues())){
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << endl;
			posible=true;	
		}
	}

	if(get<1>(b.GetValues())==get<1>(a.GetValues())){ //Primera ficha volteada
		if(get<0>(b.GetValues())==get<0>(c.GetValues()) && get<1>(c.GetValues())==get<0>(a.GetValues())){
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << endl;
			posible=true;	
		}else if(get<0>(b.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<0>(a.GetValues())){
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << endl;
			posible=true;	
		}
	}
	if(get<0>(b.GetValues())==get<0>(a.GetValues())){//Tercera ficha volteada
		if(get<1>(b.GetValues())==get<0>(c.GetValues()) && get<1>(c.GetValues())==get<1>(a.GetValues())){
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}else if(get<1>(b.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<1>(a.GetValues())){
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}
	}
	if(get<1>(b.GetValues())==get<0>(a.GetValues())){//Primera y tercera ficha volteada
		if(get<0>(b.GetValues())==get<0>(c.GetValues()) && get<1>(c.GetValues())==get<1>(a.GetValues())){
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}else if(get<0>(b.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<1>(a.GetValues())){
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}
	}
	//SECCION E. CAB
	if(get<0>(c.GetValues())==get<1>(b.GetValues())){
		if(get<1>(c.GetValues())==get<0>(a.GetValues()) && get<1>(a.GetValues())==get<0>(b.GetValues())){
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << endl;
			posible=true;	
		}else if(get<1>(c.GetValues())==get<1>(a.GetValues()) && get<0>(a.GetValues())==get<0>(b.GetValues())){
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << endl;
			posible=true;	
		}
	}

	if(get<1>(c.GetValues())==get<1>(b.GetValues())){ //Primera ficha volteada
		if(get<0>(c.GetValues())==get<0>(a.GetValues()) && get<1>(a.GetValues())==get<0>(b.GetValues())){
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << endl;
			posible=true;	
		}else if(get<0>(c.GetValues())==get<1>(a.GetValues()) && get<0>(a.GetValues())==get<0>(b.GetValues())){
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << endl;
			posible=true;	
		}
	}
	if(get<0>(c.GetValues())==get<0>(b.GetValues())){//Tercera ficha volteada
		if(get<1>(c.GetValues())==get<0>(a.GetValues()) && get<1>(a.GetValues())==get<1>(b.GetValues())){
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}else if(get<1>(c.GetValues())==get<1>(a.GetValues()) && get<0>(a.GetValues())==get<1>(b.GetValues())){
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}
	}
	if(get<1>(c.GetValues())==get<0>(b.GetValues())){//Primera y tercera ficha volteada
		if(get<0>(c.GetValues())==get<0>(a.GetValues()) && get<1>(a.GetValues())==get<1>(b.GetValues())){
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << "  ";
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}else if(get<0>(c.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<1>(b.GetValues())){
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}
	}
	//Seccion F: CBA /////////////////////////////////////////////////////////
	if(get<0>(c.GetValues())==get<1>(a.GetValues())){
		if(get<1>(c.GetValues())==get<0>(b.GetValues()) && get<1>(b.GetValues())==get<0>(a.GetValues())){
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << endl;
			posible=true;	
		}else if(get<1>(c.GetValues())==get<1>(b.GetValues()) && get<0>(b.GetValues())==get<0>(a.GetValues())){
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << endl;
			posible=true;	
		}
	}

	if(get<1>(c.GetValues())==get<1>(b.GetValues())){ //Primera ficha volteada
		if(get<0>(c.GetValues())==get<0>(b.GetValues()) && get<1>(b.GetValues())==get<0>(a.GetValues())){
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << endl;
			posible=true;	
		}else if(get<0>(c.GetValues())==get<1>(b.GetValues()) && get<0>(b.GetValues())==get<0>(a.GetValues())){
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(a.GetValues()) << "|" << get<1>(a.GetValues()) << endl;
			posible=true;	
		}
	}
	if(get<0>(c.GetValues())==get<0>(b.GetValues())){//Tercera ficha volteada
		if(get<1>(c.GetValues())==get<0>(b.GetValues()) && get<1>(b.GetValues())==get<1>(a.GetValues())){
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}else if(get<1>(c.GetValues())==get<1>(b.GetValues()) && get<0>(b.GetValues())==get<1>(a.GetValues())){
			cout << get<0>(c.GetValues()) << "|" << get<1>(c.GetValues()) << "  ";
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}
	}
	if(get<1>(c.GetValues())==get<0>(b.GetValues())){//Primera y tercera ficha volteada
		if(get<0>(c.GetValues())==get<0>(b.GetValues()) && get<1>(b.GetValues())==get<1>(a.GetValues())){
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<0>(b.GetValues()) << "|" << get<1>(b.GetValues()) << "  ";
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}else if(get<0>(c.GetValues())==get<1>(c.GetValues()) && get<0>(c.GetValues())==get<1>(a.GetValues())){
			cout << get<1>(c.GetValues()) << "|" << get<0>(c.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(b.GetValues()) << "|" << get<0>(b.GetValues()) << "  ";//Ficha volteada
			cout << get<1>(a.GetValues()) << "|" << get<0>(a.GetValues()) << endl;//Ficha volteada
			posible=true;	
		}
	}

	if(posible==false){
		cout << "No se puede formar una cadena" << endl;
	}

}