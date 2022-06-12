#pragma once
#include <iostream> //Axel Jhuan Solis Zamata
using namespace std;
class Robot{
	private:
		int x;
		int y;
		string movimientos;
		int orient;
	public:
		Robot(int,int,int);
		~Robot();
		tuple<int,int,int> Mover(string);
		void print();
};
