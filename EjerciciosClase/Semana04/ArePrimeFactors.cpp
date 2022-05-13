#include <iostream>
#include <vector>
using namespace std;

bool arePrimeFactors(int n, vector<int> V){
	int mult{1};
	bool primo{true};
	for(auto i=0;i<V.size();i++){
		mult = mult * V[i]; 
		if(V[i]>1){
			for(auto j=2;j<V[i];j++){
				if(V[i]%j==0){//Por definición, 1 no es primo
					primo = false;
				}
			}
		}else{
			primo = false;
		}
	}
	if(primo==true&&mult==n){//Si todos son primos y su producto es igual a n, retorna true(1).
		return true;
	}else{
		return false;
	}
}

int main(){
	int n{0},n2{0};
	vector<int> V;
	cout << "Ingrese un numero n: " << endl;
	cin>>n;
	cout << "Ingrese numeros para el vector: " << endl;
	while(cin>>n2){
		V.push_back(n2);
	}
	cout << arePrimeFactors(n,V) << endl;
}
