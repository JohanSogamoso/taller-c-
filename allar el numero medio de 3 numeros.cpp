#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int num1;
	int num2;
	int num3;
	
	cout << "Ingresar un numero" << endl;
	cin >> num1 >> num2 >> num3 ;
	
	if((num1 < num2 && num1 > num3) || (num1 > num2 && num1 < num3)){
		cout << "El numero medio es: " << num1 << endl;
	}else{
		if((num2 < num1 && num2 > num3) || (num2 > num1 && num2 < num3)){
			cout << "El numero medio es: " << num2 << endl;
		}else{
			if((num3 < num1 && num3 > num2) || (num3 > num1 && num3 < num2)){
				cout << "El numero medio es: " << num3 << endl;
			}else{
				cout << "\n\n " << endl;
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
