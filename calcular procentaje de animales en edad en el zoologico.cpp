#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int edad;
	int option;
	int menor =0;
	int igual =0;
	int mayor =0;
	int procentaje1;
	int procentaje2;
	int procentaje3;
	
	cout << "Ingresa 1 si deseas estudiar Chimpances, 2 si deseas estudiar Elefantes y 3 si deseas estudiar Jirafas" << endl;
	cin >> option ;
	
	if(option == 1){
		for(int i = 1; i <= 8; i++){
			cout << "Ingrese la edad del Chimpance " << i << endl;
			cin >> edad ;
				if(edad <= 1){
			menor =menor+1;
		}else{
			if(edad <= 3){
				igual =igual+1;
			}else{
				mayor =mayor+1;
			}
		}
		}
		procentaje1 =menor*100/8;
		procentaje2 =igual*100/8;
		procentaje3 =mayor*100/8;
		cout << "El procentaje de Chimpances menores de un ano es: " << procentaje1 << "%, de menores de 3 ano es: " << procentaje2 << "% y de mas de 3 ano es: " << procentaje3 << "%" << endl;
	}else{
		if(option == 2){
			for(int i = 1; i <= 4; i++){
			cout << "Ingrese la edad del Elefante " << i << endl;
			cin >> edad ;
				if(edad <= 1){
			menor =menor+1;
		}else{
			if(edad <= 3){
				igual =igual+1;
			}else{
				mayor =mayor+1;
			}
		}
		}
		procentaje1 =menor*100/4;
		procentaje2 =igual*100/4;
		procentaje3 =mayor*100/4;
		cout << "El procentaje de Elfantes menores de un ano es: " << procentaje1 << "%, de menores de 3 ano es: " << procentaje2 << "% y de mas de 3 ano es: " << procentaje3 << "%" << endl;
		}else{
			for(int i = 1; i <= 3; i++){
			cout << "Ingrese la edad del Jirafas " << i << endl;
			cin >> edad ;
				if(edad <= 1){
			menor =menor+1;
		}else{
			if(edad <= 3){
				igual =igual+1;
			}else{
				mayor =mayor+1;
			}
		}
		}
		procentaje1 =menor*100/3;
		procentaje2 =igual*100/3;
		procentaje3 =mayor*100/3;
		cout << "El procentaje de Jirafas menores de un ano es: " << procentaje1 << "%, de menores de 3 ano es: " << procentaje2 << "% y de mas de 3 ano es: " << procentaje3 << "%" << endl;
		}
	}
	
	system("PAUSE");
	return 0;
}
