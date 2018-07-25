#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int horas;
	int salario;
	int horasextras;
	
	cout << "Ingrese sus horas trabajadas en la semana" << endl;
	cin >> horas ;
	
	if(horas <= 40){
		cout << "Su salario semanal es: $" << horas*16 << endl;
	}else{
		salario =40*16, horasextras =(horas-40)*20;
		cout << "Su salario semanal es: $" << salario+horasextras << endl;
	}
	
	system("PAUSE");
	return 0;
}
