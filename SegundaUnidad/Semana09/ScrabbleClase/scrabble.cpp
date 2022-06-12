#include <iostream> //Axel Jhuan Solis Zamata
#include "scrabble.h"
#include <tuple>
#include <vector>
#include "ficha.h"
#include <random>
using namespace std;
scrabble::scrabble(string _nombre, int _nfichas){
	nombre = _nombre;
	nfichas = _nfichas;
}
scrabble::~scrabble()
{
}
vector<ficha> scrabble::Create(){
	//Seccion randomizador
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>rand_digits(1,27);
	uniform_int_distribution<char> rand_ascii('a','z');
	//Creación de las fichas
	vector<ficha> vectorfichas;
	for (int i=0; i<nfichas; i++)
	{
  	ficha fichadeljuego(rand_ascii(gen),rand_digits(gen));
  	vectorfichas.push_back(fichadeljuego); 
	}
	return vectorfichas;
}

void scrabble::print(vector<ficha> vectorfichas){
	for(int i=0;i<nfichas;i++){
		//(vectorfichas.at(i)).printing((vectorfichas.at(i)).Get()); Descontinuado
		cout << "La ficha numero " << i+1 << " del jugador " << nombre << " tiene la letra " << (vectorfichas.at(i)).getletra();
		cout << " y el valor " << (vectorfichas.at(i)).getvalor() << endl;
	}
}