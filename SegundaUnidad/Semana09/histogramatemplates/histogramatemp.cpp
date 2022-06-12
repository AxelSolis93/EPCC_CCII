#include <iostream> //Axel Jhuan Solis Zamata
#include <vector>
#include <map>
using namespace std;
template<class T>
T hist(vector<T> V, int n){
	T num{0};
	T max=V.at(0);
	T min=V.at(0);
	for(int i=0;i<V.size();i++){ //Halla el mayor y menor valor
		if(V.at(i)>max){
			max=V.at(i);
		}else if(V.at(i)<min){
			min=V.at(i);
		}
	}
	T ancho{0};
	
	ancho=(max-min)/n;
	map<T,int>counts{};
	for(int i=0;i<V.size();i++){//Agrega 1 a las letras ya contadas.
		num = V.at(i);
		counts[num]++;
	}
	for (auto i=counts.begin(); i!=counts.end();i++){ //Imprime el histograma, error con los intervalos
	cout << i->first << " ";//Imprime el numero
	cout << "- " << (i->first)+ancho << " ";//Segundo num
		for(auto j=0;j<i->second;j++){
			cout << "*"; //histograma
		}	
	cout << endl;
	}
}

int main(){
	int n{5};//intervalo
	vector <int> V = {10,2,9,7,5,6,1,8,8,4};
	n=5;
	hist(V,n);
}
