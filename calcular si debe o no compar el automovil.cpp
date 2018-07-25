#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int costo;
	int devaluo;
	int valorizacion;
	
	cout << "Ingrese el costo del automovil y terreno" << endl;
	cin >> costo ;
	
	devaluo =(costo*0.1)*3;
	valorizacion =(costo*0.3)*3;
	
	if(devaluo < (valorizacion/2)){
		cout << "Debes comprar el automovil" << endl;
	}else{
		cout << "No debes comprar el automovil" << endl;
	}
		
	system("PAUSE");
	return 0;
}
