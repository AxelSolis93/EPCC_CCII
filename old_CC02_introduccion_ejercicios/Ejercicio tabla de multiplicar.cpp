#include <iostream>
using namespace std;
int main()
{
	cout << "_______________________________________________"<<endl;
	cout<<endl;
	cout<<"  *|   1   2   3   4   5   6   7   8   9   10"<<endl;
	cout<<"---+-----------------------------------------"<<endl;
	for(int i=1;i<11;i++){
		if(i==10){
			cout<<" "<<i<<"|";
		}else{
			cout<<"  "<<i<<"|";
		}
		
		for(int j=1;j<11;j++){
			if(j*i>9&&j!=10){
				cout <<"  "<< j*i;
			}else{
				cout << "   "<<j*i;
			}
		}cout<<endl;
	}
	cout << "_______________________________________________"<<endl;
	cout << endl << endl;
	system("pause");
}
