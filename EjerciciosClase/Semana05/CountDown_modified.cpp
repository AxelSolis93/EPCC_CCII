#include <iostream>
using namespace std;

void CountUp(int n, int n2){
	if(n2==n){//Compara el numero ascendente con el limite puesto en el input
		cout<<"Blastoff!";
	}else{
		cout << n2 << endl;
		CountUp(n,n2+1);
	}
}
int main(){
	int n{};
	int n2{0};
	cin>>n;
	CountUp(n,n2);
	return 0;
}
