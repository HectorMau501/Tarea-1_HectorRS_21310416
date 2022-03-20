/*Ceti Colomos
Docente: Luis Manuel Morales Medina
Hector Mauricio Rodriguez Salazar 21310416
Grupo y Grado 2P2*/

//Bibliotecas

#include <stdlib.h>
#include <iostream>

using namespace std;

//Funcion Principal
int main(int argc, char** argv) {

    //Variables Locales
    	int numero, unidades, decenas, centenas, millar;
	
	/*
	M=1000;
	D=500;
	C=100;
	L=50;
	X=10;
	V=5;
	I=1;*/
	
	cout<<"Bienvenido"<<endl;
	cout<<"Hector Mauricio Rodriguez Salazar 21310314"<<endl;
	cout<<"Convierta una cadena que representa un numero romano en numero arabico (V = 5)"<<endl;
	cout<<"Inserte el numero arabigo para que ser impreso en romano"<<endl;
	cin>>numero;
	
	
	//Esta es la forma de obtener las unidades del numero
	unidades = numero % 10;		numero = numero / 10;	 
	decenas = numero % 10; 		numero = numero / 10;
	centenas = numero % 10;		numero = numero / 10;
	millar = numero % 10;		numero = numero / 10;
	
	




    
	system("pause");
}


