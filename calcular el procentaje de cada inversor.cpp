#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int inv1;
	int inv2;
	int inv3;
	int valortotal;
	
	cout << "Ingrese la inversion de cada una de las 3 personas" << endl;
	cin >> inv1 >> inv2 >> inv3 ;
	
	valortotal =inv1+inv2+inv3;
	
	cout << "El procentaje de dinero invertido por el primero es: " << (inv1*100)/valortotal << "%, por el seugundo es: " << (inv2*100)/valortotal <<"% y por el tercero es: " << (inv3*100)/valortotal << "%" << endl;
	system("PAUSE");
	return 0;
}
