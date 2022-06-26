#pragma once
#include <iostream> //Axel Jhuan Solis Zamata
#include <algorithm>
#include <string>
class Racional{
	private:
		int a;
		int b;
	public:
		explicit Racional(int _a=0,int _b=1){
			a=_a;
			b=_b;
		};
		Racional(const Racional& _r){ //copia
			a = _r.a;
			b = _r.b;
			
		};
		void asignar(int _a=0, int _b=1){ //asigna los valores, util cuando se introduce un string con los valores
			a = _a;
			b = _b;
		}

		Racional& operator=(const Racional& r){ //asignacion
			
			a = r.a;
			b = r.b;
			return *this;
		}
		//~Racional(){};

		double Double(Racional x){
			double temp{double(x.a)/double(x.b)};
			return temp;
		}

		Racional CoPrimo(Racional x){ //Simplificar la fraccion hasta que sean coprimos
			for(int i=2;i<x.a;i++){
				if(x.a%i==0&&x.b%i==0){//divisibles por el mismo numero
							return CoPrimo(Racional(x.a/i,x.b/i)); //Retorna el CoPrimo de los numeros entre su divisor común, creando una recursion.
				}
			}
			return Racional(x.a,x.b); //No tienen divisibles comunes, retorna el mismo numero.
		}

		double operator+ (Racional & second) { //Sobrecarga operador +
			int res{0};
			Racional temp{0,0};
			res = ((a*second.b)+(b*second.a)); //second es la segunda operacion
			std::cout << res << "/" << b*second.b<<std::endl;
			if(res<0){
				temp = CoPrimo(Racional(-res,b*second.b));
				temp.a = -temp.a;
				std::cout << "Fraccion simplificada: "<< temp;
			}else if(b*second.b<0){
				temp = CoPrimo(Racional(res,-(b*second.b)));
				temp.b = -temp.b;
				std::cout << "Fraccion simplificada: "<< temp;
			}else{
				std::cout << "Fraccion simplificada: " << CoPrimo(Racional(res,b*second.b));
			}
			   //Simplifica
			std::cout << "double: ";
			return Double(CoPrimo(Racional(res,b*second.b)));
		}
		
		double operator-(Racional & second){ //Sobrecarga operador -
			int res{0}; 
			Racional temp{0,0};//Racional temporal para el cambio de signos en caso uno de los numeros sea negativo
			res = ((a*second.b)-(b*second.a)); //second es la segunda operacion
			std::cout << res << "/" << b*second.b << std::endl;
			if(res<0&&b*second.b<0){ //Si ambos son negativos
				std::cout << "Fraccion simplificada: " << CoPrimo(Racional(-res,-(b*second.b)));//Elimina los negativos y simplifica
				
			}else if(res<0){
				temp = CoPrimo(Racional(-res,b*second.b));//Numerador negativo, se positiviza para sacar la simplificacion
				temp.a = -temp.a; //Vuelve al valor negativo de vuelta;
				std::cout << "Fraccion simplificada: " << temp;
				
			}else if(b*second.b<0){
				temp = CoPrimo(Racional(res,-(b*second.b)));//Denominador negativo, se positiviza para sacar la simplificacion
				temp.b = -temp.b; //Vuelve al valor negativo de vuelta;
				std::cout << "Fraccion simplificada: " << temp;
				
			}else{
				std::cout << "Fraccion simplificada: " << CoPrimo(Racional(res,b*second.b)); //Simplifica
				
			}
			std::cout << "Double: ";
			return Double(Racional(res,b*second.b));
		};

		double operator*(Racional & second){ //Sobrecarga operador *
			Racional temp{0,0};
			std::cout << a*second.a << "/" << b*second.b << std::endl;
			if(a*second.a<0){
				temp = CoPrimo(Racional(-a*second.a,b*second.b));//Numerador negativo, se positiviza para sacar la simplificacion
				temp.a = -temp.a; //Vuelve al valor negativo de vuelta;
				std::cout << "Fraccion simplificada: " << temp;
			}else if(b*second.b<0){
				temp = CoPrimo(Racional(a*second.a,-b*second.b));//Numerador negativo, se positiviza para sacar la simplificacion
				temp.b = -temp.b; //Vuelve al valor negativo de vuelta;
				std::cout << "Fraccion simplificada: " << temp;
			}else{
				std::cout << "Fraccion simplificada: " << CoPrimo(Racional(a*second.a,b*second.b)); //Simplifica a*c/b*d
			}
			std::cout << "double: ";
			return Double(Racional(a*second.a,b*second.b));
			
		};

		double operator/(Racional & second){ //Sobrecarga operador /
			Racional temp{0,0};
			std::cout << a*second.b << "/" << b*second.a << std::endl;
			if(a*second.b<0){ 
				temp = CoPrimo(Racional(-a*second.b,b*second.a));//Numerador negativo, se positiviza para sacar la simplificacion
				temp.a = -temp.a; //Vuelve al valor negativo de vuelta;
				std::cout << "Fraccion simplificada: " << temp;
			}else if(b*second.a<0){
				temp = CoPrimo(Racional(a*second.b,-b*second.a));//Numerador negativo, se positiviza para sacar la simplificacion
				temp.b = -temp.b; //Vuelve al valor negativo de vuelta;
				std::cout << "Fraccion simplificada: " << temp;
			}else{
				std::cout << "Fraccion simplificada: " << CoPrimo(Racional(a*second.b,b*second.a)); //Simplifica a*d/b*c
			}
			std::cout << "double: ";
			return Double(Racional(a*second.b,b*second.a));
			
		};

		
		/*friend Racional& operator+=(Racional &first, Racional &second){  //Sobrecarga operador +=
			first = first + second;
			return first;
		}*/
		
		friend std::istream& operator>>(std::istream& in, Racional& r){ //Sobrecarga operador <<
			std::string ss;
			std::cout << "Ingrese el numero racional(a/b)" << std::endl;
			std::cin>>ss;
			int f = ss.find("/");
			r.asignar(2,4);
			r.asignar(atoi(ss.substr(0,f).c_str()),atoi(ss.substr(f+1,ss.size()).c_str()));
			ss.erase(std::remove(ss.begin(),ss.end(),'/'),ss.end());
			return in;
		}

		friend std::ostream& operator<<(std::ostream& os, const Racional& r){ //Sobrecarga operador <<
			return os << r.a << "/" << r.b << std::endl;
		}
		
		
		
};
