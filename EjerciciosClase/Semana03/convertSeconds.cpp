#include <iostream>
using namespace std;
int main()
{
	int seg{0},segcon{0},min{0},hora{0}/*,dia{0}*/;
	cout << "Ingrese los segundos a convertir: " << endl;
	cin>>seg;
	min = seg/60;
	hora=min/60;
	while(min>59){
		min=min%60;
	}
//	while(hora>23){//en caso el numero de segundos sea mayor a 86400, implementaría dias.
//		hora=hora%24;
//	}
	segcon=seg%60;
	//dia=seg/86400;
	cout << seg << " segundos = " /*<<dia << " dias, " */ << hora << " horas, "<< min << " minutos y "<< segcon << " segundos. "<<endl;
}
