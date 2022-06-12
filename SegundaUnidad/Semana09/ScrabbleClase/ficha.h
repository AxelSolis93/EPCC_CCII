#pragma once
#include <iostream> //Axel Jhuan Solis Zamata
using namespace std;
class ficha{
	protected:
		char letra;
		int valor;
	public:
		ficha(char,int);
		~ficha();
		//tuple<char,int> Get(); descontinuado
		//void printing(tuple<char,int>); descontinuado
		char getletra();
		int getvalor();
};
