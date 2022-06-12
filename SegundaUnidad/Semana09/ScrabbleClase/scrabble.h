#pragma once
#include "ficha.h"
#include <vector>
#include <iostream> //Axel Jhuan Solis Zamata
using namespace std;
class scrabble{
	private:
		string nombre;
		int nfichas;
	public:
		scrabble(string, int);
		~scrabble();
		vector<ficha> Create();
		void print(vector<ficha>);
};
