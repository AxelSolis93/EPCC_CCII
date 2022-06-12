#include <iostream> //Axel Jhuan Solis Zamata
#include "ficha.h"
#include <tuple>
using namespace std;
ficha::ficha(char _letra, int _valor){
	letra = _letra;
	valor = _valor;
}
ficha::~ficha()
{
}

char ficha::getletra(){
	return letra;
}

int ficha::getvalor(){
	return valor;
}
/*tuple<char, int> ficha::Get(){	
	return make_tuple(letra,valor); 
}*/ //Parte antigua de codigo, ya no necesaria
