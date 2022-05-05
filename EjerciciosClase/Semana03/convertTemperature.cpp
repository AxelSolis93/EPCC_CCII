#include <iostream>
#include <iomanip> //one decimal place
using namespace std;
int main()
{
	double num{0},F{0};
	cout << "Ingrese un numero: " << endl;
	cin>>num;
	F = (num*9/5)+32;
	if(num<10&&num>-10){
		cout << setprecision(2)<<num << " C = ";
	}else if((num>100&&num<1000)||(num>-1000&&num<-100)){
		cout << setprecision(4) << num << " C = ";
	}else{
		cout<<setprecision(3)<<num<<" C = "; 
	}
	
	if(F<10&&F>-10){
		cout << setprecision(2) << F << " F" << endl;
	}else if((F>100&&F<1000)||(F>-1000&&F<-100)){
		cout << setprecision(4) << F << " F" << endl;
	}else{
		cout << setprecision(3) << F << " F" << endl;
	}

}
