#include <iostream>
#include <vector>
using namespace std;

void Binario(int n, vector<int> &B){
	if(n>1){
		Binario(n/2, B); //Recursion
		B.push_back(n%2);
	}else{
		B.push_back(n%2);
	}
}
int main(){
	int n{};
	vector <int> B;
	cin>>n;
	Binario(n,B);
	for(int i=0;i<B.size();i++){
		cout << B[i];
	}
}
