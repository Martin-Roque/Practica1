#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int numero;
	cout<< "Escribe un numero"<<endl;
	cin>> numero;
	while (numero != 5){
		cout<< "Escribe un numero"<<endl;
		cin>> numero;
	}
	cout<<"El numero introducido fue el elegido, es decir el 5"<<endl;
	system("PAUSE");
    return 0;
}
