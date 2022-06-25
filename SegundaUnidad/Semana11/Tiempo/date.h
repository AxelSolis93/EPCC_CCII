#pragma once
#include <iostream> //Axel Jhuan Solis Zamata
class Date{
	private:
		int hora;
		int min;
		int seg;
	public:
		Date(int _hora, int _min, int _seg){
			hora = _hora;
			min = _min;
			seg = _seg;
		};
		~Date(){};
		Date operator+ (Date & first) { //Sobrecarga operador +
			int sumseg{first.seg+seg};//Suma los segundos y ya.
			int summin((first.min+min)+sumseg/60);//Suma los minutos y le agrega los minutos extra de los segundos en caso hayan superado los 60 segundos
			int sumhora{first.hora+hora+summin/60};//Suma las horas y le agrega los minutos ya calculados. 
			return Date(sumhora,summin%60,sumseg%60);//El residuo serían los minutos o segundos actuales. Si el numero no supera 60, el residuo sale el mismo numero.
		}
		Date operator-(Date & first){ //Sobrecarga operador -
			int resseg{seg-first.seg};//resta los segundos
			int resmin{0},reshora{0};
			if(resseg<0){//Si sale negativo
				resseg=resseg+60;//Suma un minuto a los segundos
				resmin = min-first.min-1;//Resta un minuto a los minutos
				
			}else{
			    resmin = min-first.min;//Los minutos se restan normalmente
			}
			if(resmin<0){//Si la resta de minutos es negativa
				resmin=resmin+60;//Se le suma una hora a los minutos
				reshora = hora-first.hora-1;//Se le resta una hora a las horas
			}else{
				reshora =hora-first.hora;//Las horas se restan normalmente
			}
			 
			return Date(reshora,resmin,resseg);
		};
		friend bool operator==(Date &first, Date &second){  //Sobrecarga operador ==
			if(first.hora==second.hora&&first.min==second.min&&first.seg==second.seg){
				return true;
			}else{
				return false;
			}
		}

		friend bool operator!=(Date &first, Date &second){ //Sobrecarga operador !=
			if(first.hora!=second.hora||first.min!=second.min||first.seg!=second.seg){
				return true;
			}else{
				return false;
			}
		}

		friend bool operator>(Date &first, Date &second){ //Sobrecarga operador >
			if(first.hora>second.hora){//primera hora mayor a segunda
				return true;
			}else if(first.hora==second.hora&&first.min>second.min){//Horas iguales pero minutos mayor
				return true;
			}else if(first.hora==second.hora&&first.min==second.min&&first.seg>second.seg){//Horas y minutos iguales, segundos mayor
				return true;
			}else{
				return false;
			}
		}

		friend bool operator>=(Date &first, Date &second){//Sobrecarga operador >=
			if(first.hora>second.hora){//primera hora mayor a segunda
				return true;
			}else if(first.hora==second.hora&&first.min>second.min){//Horas iguales pero minutos mayor
				return true;
			}else if(first.hora==second.hora&&first.min==second.min&&first.seg>second.seg){
				return true;
			}else if(first.hora==second.hora&&first.min==second.min&&first.seg==second.seg){//Todo igual
				return true;
			}else{
				return false;
			}
		}

		friend bool operator<(Date &first, Date &second){//Sobrecarga operador < 
			if(first.hora<second.hora){//primera hora menor a segunda
				return true;
			}else if(first.hora==second.hora&&first.min<second.min){//Horas iguales pero minutos menor
				return true;
			}else if(first.hora==second.hora&&first.min==second.min&&first.seg<second.seg){//horas y minutos iguales pero segundos menores.
				return true;
			}else{
				return false;
			}
		}

		friend bool operator<=(Date &first, Date &second){//Sobrecarga operador <=
			if(first.hora<second.hora){//primera hora menor a segunda
				return true;
			}else if(first.hora==second.hora&&first.min<second.min){//Horas iguales pero minutos menor
				return true;
			}else if(first.hora==second.hora&&first.min==second.min&&first.seg<second.seg){
				return true;
			}else if(first.hora==second.hora&&first.min==second.min&&first.seg==second.seg){ //Todo igual
				return true;
			}else{
				return false;
			}
		}

		friend std::ostream& operator<<(std::ostream& os, const Date& dt){ //Sobrecarga operador <<
			if (dt.hora>11){ 
				return os << dt.hora << "/" << dt.min << "/" << dt.seg<< " pm";
			}else{
				return os << dt.hora << "/" << dt.min << "/" << dt.seg<< " am" ;
			}
			
			
		}
		
		
		
};
