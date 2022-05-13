#include <iostream>//Not finished, dont support white spaces.
#include <vector>
#include <map>
#include <string>
using namespace std;

void Anagrams(string s1, string s2){
	map<string, int>palabra1{};
	map<string, int>palabra2{};
	int cont{0};
	string letter;
	for(int i=0;i<s1.size();i++){
		letter = s1.at(i);
		palabra1[letter]++;
	}
	for(int i=0;i<s2.size();i++){
		letter = s2.at(i);
		palabra2[letter]++;
	}
	if(palabra1.size()==palabra2.size()){
		for(auto i=palabra1.begin();i!=palabra1.end();i++){
			for(auto j=palabra2.begin();j!=palabra2.end();j++){
				if(i->first==j->first){
					if(i->second==j->second){
						cont++;
						j=palabra2.end();
						j--;
					}
				}
			}
		}
	}
	if(cont == palabra1.size()&&cont==palabra2.size()){
		cout << "Las palabras son anagramas" << endl;
	}else{
		cout << "Las palabras no son anagramas" << endl;
	}
	
}

int main(){
	string s1,s2;
	cout << "Ingrese el primer string: " << endl;
	getline(cin,s1);
	cout << "Ingrese el segundo string: " << endl;
	getline(cin,s2);	
	//Ss2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
	Anagrams(s1,s2);
}
