#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int n;
	int num;
	int menor;
	
	cout << "ingresa el limite de numeros para allar el menor" << endl;
	cin >> n ;
	
	cout << "ingresa un numero" << endl;
	cin >> num ;
	
	for(int i = 2; i <= n; i++){
		cin >> menor ;
		if(menor < num){
			num =menor;
		}else{
		}
	}
	
	cout << "El numero menor es: " << num << endl;
	system("PAUSE");
	return 0;
}
