#include <iostream>//Axel Jhuan Solis Zamata
#include "scrabble.h"
#include <tuple>
#include <string>
#include <vector>
using namespace std;
int main(){
    char letra;
    int valor{0};
    scrabble p1= scrabble("Player1",7); //Inicia jugador con un nombre y numero de fichas
    p1.print(p1.Create()); //Imprime los valores de las fichas generadas por el create()
    scrabble p2= scrabble("Player2",7);
    p2.print(p2.Create());
    scrabble p3= scrabble("Player3",7);
    p3.print(p3.Create());
    scrabble p4= scrabble("Player4",7);
    p4.print(p4.Create());

    system("pause");
    return 0;
}
