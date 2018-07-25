#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int num;
	int resultado;
	
	cout << "Ingresa el valor de la tabla de multiplicar" << endl;
	cin >> num ;
	
	for(int i = 0; i <= 10; i++){
		resultado =i*num;
		cout << i << " por " << num << " es igual " << resultado << endl;
	}
	
	system("PAUSE");
	return 0;
}
