/*Ceti Colomos
Docente: Luis Manuel Morales Medina
Hector Mauricio Rodriguez Salazar 21310416
Grupo y Grado 2P2*/



//Bibliotecas
#include <stdlib.h>
#include <iostream>

using namespace std;

//Funcion principal
int main(int argc, char** argv) {

	//Declaracion de varibles locales
	int i, n=0, cambio=0;
	
	cout<<"Bienvenido"<<endl;
	cout<<"Hector Mauricio Rodriguez Salazar 21310314"<<endl;
	cout<<"Numeros Primos del 1 hasta n"<<endl;
	cout<<"Coloque el numero que desea imprimir desde el 1 hasta n en primos"<<endl;
	cin>>n; //Guardamos el numero aqui
	cout<<"Los numeros pares son"<<endl;

		
	//Ciclo for para la impresion de los n numeros
	for(i = 1; i <= n ; i++){
		
		/*Estructura selectiva if para compara los numeros sean divisibles entre dos 
		y asi saber si son numeros pares*/
		if(i % 2 == 0){
		cout<<i<<endl;
		}
	}

	system("pause");

    return 0;
}