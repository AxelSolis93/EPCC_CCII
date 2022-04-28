#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n{0};
	bool a=false;
	vector<int> numbers;
	while(a==false){
		cout << "Ingrese un numero: " << endl;
		cin>>n;
		if(cin.fail()){
			a=true;
		}else{
			numbers.push_back(n);
		}
		
	}
	int temp{0};
	for(int i=0;i<numbers.size();i++){
		for(int j=i+1;j<numbers.size();j++){
			if(numbers[i]>numbers[j]){//cambia valores
				temp=numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=temp;
			}
		}
	}
	cout << "Los numeros en forma ascendente son: " << endl;
	for(int i=0;i<numbers.size();i++){
		cout << numbers[i]<<endl;
	}
	cout << endl << endl;
	system("pause");
}
