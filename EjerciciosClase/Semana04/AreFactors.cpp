#include <iostream>
#include <vector>
using namespace std;

bool areFactors(int n, vector<int> V){
	int cont{0};
	for(auto i=0;i<V.size();i++){
		if(V[i]%n==0){
			cont++;
		}
	}
	if(cont==V.size()){
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
	cout << areFactors(n,V) << endl;
}
