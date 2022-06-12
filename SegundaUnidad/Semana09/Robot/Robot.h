#pragma once
#include <iostream> //Axel Jhuan Solis Zamata
#include <vector>
using namespace std;
class Robot{
	private:
		string nombre;
	public:
		Robot(string);
		~Robot();
		void setName(string _nombre){
			nombre = _nombre;
		};
		vector<string> Create(vector<string>&, int);
		string Reset(vector<string>&, int);
		void print();
};
