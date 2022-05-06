#include <iostream>
#include <random> //random number
#include <ctime> //Change the rand() seed
using namespace std;
int main()
{
	int number{0},guess{1};
	cout << "I´m thinking of a number between 1 and 100 (including both). " << endl;
	cout << "Can you guess what it is?" << endl;
	cout << "Type a number: " << endl;
	cin>>number;
	srand(time(0));
	guess = rand()%101;
	cout << "Your guess is: " << number << endl;
	cout << "The number I was thinking of is: " << guess << endl;
	if(guess<number){
		cout<<"You were off by: " <<number-guess<<endl;
	}else if(number<guess){
		cout << "You were off by: " <<guess-number<<endl;
	}else{
		cout << "You guessed the number" << endl;
	}
}
