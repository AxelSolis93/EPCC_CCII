#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	map<string, int>counts{};
	string word{};
//	cout << "Ingrese palabras (para terminar el loop pulse ctrl+Z y luego enter)"<<endl; //antiguo metodo sin el 0
	cout << "Ingrese palabras (cuando desee dejar de escribir, ingrese un 0): " << endl;
	while(cin>>word&&word!="0"){
		counts[word]++;
	}
	for (auto i = counts.begin(); i != counts.end(); ++i){
		cout << i->first << " , " << i->second << endl; //i se vuelve el primer mapa y "->" accede al primer y segundo elemento del par (palabra, cantidad).
	}
}
