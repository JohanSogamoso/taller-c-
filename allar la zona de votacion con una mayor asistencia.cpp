#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int votantes;
	int option;
	int norte =0;
	int centro =0;
	int sur =0;
	
	cout << "Ingresa el numero de votantes que asistieron" << endl;
	cin >> votantes ;
	
	for(int i = 1; i <= votantes; i++){
		cout << "Ingresa 1 si ere de la zona norte, 2 si eres de la zona centro y 3 si eres de la zona sur" << endl;
		cin >> option ;
		if(option == 1){
			norte =norte+1;
		}else{
			if(option == 2){
				centro =centro+1;
			}else{
				sur =sur+1;
			}
		}
	}
	if(norte > centro && norte > sur){
		cout << "El numero de votantes de la zona norte fue de " << norte << " personas, de la zona centro fue de " << centro << " personas y de la zona sur fue de " << sur << " personas. Con mayor participacion de la zona norte" << endl;
	}else{
		if(centro > norte && centro > sur){
			cout << "El numero de votantes de la zona norte fue de " << norte << " personas, de la zona centro fue de " << centro << " personas y de la zona sur fue de " << sur << " personas. Con mayor participacion de la zona centro" << endl;
		}else{
			if(sur > norte && sur > centro){
				cout << "El numero de votantes de la zona norte fue de " << norte << " personas, de la zona centro fue de " << centro << " personas y de la zona sur fue de " << sur << " personas. Con mayor participacion de la zona sur" << endl;
			}else{
			}
		}
	} 
	
	system("PAUSE");
	return 0;
}
