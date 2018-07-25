#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int presupuesto;
	
	cout << "Ingrese el presupuesto anual del hospital" << endl;
	cin >> presupuesto ;
	
	cout << "El presupuesto para el area de Ginecologia es: $" << presupuesto*0.40 << ", para el area de Traumatologia es: $" << presupuesto*0.30 << " y para el area de Pediatria es: $" << presupuesto*0.30 << endl;
	system("PAUSE");
	return 0;
}
