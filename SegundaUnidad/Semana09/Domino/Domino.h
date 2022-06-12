#pragma once
#include <iostream> //Axel Jhuan Solis Zamata
#include <vector>
#include <tuple>
using namespace std;
class Domino{
	private:
		int v1;
		int v2;
	public:
		Domino(int, int);
		~Domino();
		tuple<int,int> GetValues(){
			return make_tuple(v1,v2); //retorna los 2 valores
		}
};
