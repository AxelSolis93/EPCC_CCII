#include <iostream>
#include <string>
#include <map>
using namespace std;
void letterHist(string l){
	string letter;
	map<string, int>counts{};
	for(int i=0;i<26;i++){ 
		string templ(1,char(97+i)); 
		counts.insert(pair<string,int>(templ,0)); //Inserta todas las letras con una cantidad de 0;
	}
	for(int i=0;i<l.size();i++){//Agrega 1 a las letras ya contadas.
		letter = l.at(i);
		counts[letter]++;
	}
	for (auto i=counts.begin(); i!=counts.end();++i){ //Imprime el histograma
		cout << i->first << " ";//Imprime la letra
		for(auto j=0;j<i->second;j++){
			cout << "*"; //histograma
		}	
		cout << endl; 
	}
}

int main(){
	string word;
	cout << "Ingrese un string: " << endl;
	cin>>word;
	for(int i=0;i<word.size();i++){ //Convierte las mayúsculas a minúsculas
		word.at(i)=tolower(word.at(i));
	}
	letterHist(word);
}
