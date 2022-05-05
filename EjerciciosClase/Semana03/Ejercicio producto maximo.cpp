#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n{0},num{0};
	vector<int> numbers;
	cout << "Ingrese cuantos numeros desea poner: " << endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout << "ingrese un numero mayor a 0: " << endl;
		cin>>num;
		numbers.push_back(num);
	}
	int may{numbers[0]*numbers[1]};
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(numbers[i]*numbers[j]>may){
				may=numbers[i]*numbers[j];
			}
		}
	}
	cout << "El producto maximo es " << may << endl;
	cout << endl << endl;
	system("pause");
}
