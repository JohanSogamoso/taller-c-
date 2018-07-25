#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int minutos;
	int option;
	
	cout << "Ingrese 1 si realizaste la actividad de dormir y 2 si realizaste la actividad de sentado en reposo" << endl;
	cin >> option ;
	
	if(option == 1){
		cout << "Por favor ingrese el tiempo empleado en minutos" << endl;
		cin >> minutos ;
		cout << "Las calorias que quema en la actividad de dormir es: " << minutos*1.08 << endl;
	}else{
		cout << "Por favor ingrese el tiempo empleado en minutos" << endl;
		cin >> minutos ;
		cout << "Las calorias que quema en la actividad de estar sentado en reposo es: " << minutos*1.66 << endl;
	}
	
	system("PAUSE");
	return 0;
}
