#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float inversion;
	float reinversion;
	float ganancia;
	
	cout << "Ingrese la cantidad a invertir en el banco" << endl;
	cin >> inversion ;
	
	for(int i =1; i <= 12; i++){
		ganancia =inversion*0.02;
		reinversion =inversion+ganancia;
		inversion =reinversion;
	}
	
	cout << "La ganacia al invertir por mes en un ano es: $" << reinversion << endl;
	system("PAUSE");
	return 0;
}
