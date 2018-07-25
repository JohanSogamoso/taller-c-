#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int option;
	float nota;
	int notasperdidas;
	float suma =0;
	float promedio;
	int descuento1;
	int descuento2;
	
	cout << "Ingrese 1 si el alumno es de profesional y 2 si el alumno es de preparatoria" << endl;
	cin >> option ;
	
	if(option == 1){
		for(int i = 1; i <= 11; i++){
			cout << "ingrese la nota " << i << endl;
			cin >> nota ;
			suma =suma+nota;
		}
		promedio =suma/11;
		descuento1 =300*0.20;
		if(promedio >= 9.5){
			cout << "El alumno de profecional debe pagar de colegiatura $" << 300*11-descuento1 << endl;
		}else{
			cout << "El alumno de profecional debe pagar de colegiatura $" << 300*11 << endl;
		}
	}else{
		for(int i = 1; i <= 11; i++){
			cout << "Ingrese la nota " << i << endl;
			cin >> nota ;
			suma =suma+nota;
		}
		promedio=suma/11;
		cout << "Ingrese cuantas notas perdio" << endl;
		cin >> notasperdidas ;
		descuento1 =180*0.25;
		descuento2 =180*0.1;
		if(promedio >= 9.5){
			cout << "El alumno de preparatoria debe pagar de colegiatura $" << 180*11-descuento1 << " y podra cursar 55 unidades" << endl;
		}else{
			if(promedio >= 9.0){
				cout << "El alumno de preparatoria debe pagar de colegiatura $" << 180*10-descuento2 << " y podra cursar 50 unidades" << endl;
			}else{
				if(promedio >= 7.0){
					cout << "El alumno de preparatoria debe pagar de colegiatura $" << 180*10 << " y podra cursar 50 unidades" << endl;
				}else{
					if(notasperdidas <= 3){
						cout << "El alumno de preparatoria debe pagar de colegiatura $" << 180*9 << " y podra cursar 45 unidades" << endl;
					}else{
						cout << "El alumno de preparatoria debe pagar de colegiatura $" << 180*8 << " y podra cursar 40 unidades" << endl;
					}
				}
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
