#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
string elim(string a){
	int cont{0};//sirve para contar los espacios.
	for(char &n:a){
		if(int(n)<97||int(n)>122){ //char a y char z, no acepta mayúsculas por el momento.
			n=' '; //Reemplaza los caracteres con un vacio.
		}
	}
	a.erase(remove(a.begin(), a.end(), ' '), a.end()); //Elimina todos los espacios vacios.
	return a;
}

string mayor(map<string,int> counts){
	string may{"a"};
	for (auto i = counts.begin(); i != counts.end(); ++i){
		string temps=i->first;
		if(temps.size()>may.size()){
			may = i->first;
		}
	}
	return may;
}
int main()
{
	string temp{};
	map<string, int>counts{};
	string word{};
	cout << "Ingrese palabras (cuando desee dejar de escribir, ingrese un 0): " << endl;
	while(cin>>word&&word!="0"){
		counts[word]++;
	}
	map<string, int>nuevo{};//guardar los strings sin caracteres que no sean letras del alfabeto minúsculas
	for (auto i = counts.begin(); i != counts.end(); ++i){
		cout << i->first << " : " << i->second << endl;
		temp = elim(i->first);
		nuevo.insert(pair<string,int>(temp, i->second));
	}
	cout << "Valores que no son alfabeticos eliminados" << endl;
	for (auto j = nuevo.begin(); j != nuevo.end(); ++j){
		cout << j->first << " : " << j->second << endl;
	}
	cout<<"La palabra mas larga es: " << mayor(nuevo)<<endl;//Halla la palabra más grande y enteramente formada por letras del alfabeto minúsculas.
}


