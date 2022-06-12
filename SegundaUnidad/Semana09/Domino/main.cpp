#include <iostream>//Axel Jhuan Solis Zamata
#include <string>
#include <vector>
#include "Domino.h"
#include "Cadena.h"
#include <tuple>
using namespace std;
int main(){
    //Domino d1 = Domino(2,1);
    //Domino d2 = Domino(2,3);
    //Domino d3 = Domino(1,3);
    Domino d1 = Domino(1,2);
    Domino d2 = Domino(4,1);
    Domino d3 = Domino(2,3);
    Cadena c1 = Cadena();
	c1.Create(d1,d2,d3);

    system("pause");
    return 0;
}
