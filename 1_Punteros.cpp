/*
& Obtiene la dirección de una variable.
*Define una variable como puntero.
*Obtiene el contenido de una variable puntero.
Los punteros son muy utiles cuando queremos crear arrays dinamicos y matrices dinamicas 

nota
Son variables punteros aquellas que apuntan a la posición en donde otras variablels de programa 
se almacenan. 
*/
#include<iostream>

using namespace std;

int main(){
	// Inicializar un puntero
	int edad,*p_edad;
	edad =18;
	p_edad=&edad;
	
	cout<<"Edad Valor:"<<*p_edad<<endl;
	cout<<"Edad Direccion:"<<p_edad<<endl;
	cout<<"------------"<<endl;
	*p_edad = 24;
	cout<<"Edad Valor:"<<*p_edad<<endl;
	cout<<"Edad Direccion:"<<p_edad<<endl;
	
	cout<<"------d------"<<endl;
	int numero;
	int *p_numero = &numero;
	*p_numero = 11;
	cout<<"Valor:"<<*p_numero<<endl;
	cout<<"Direccion:"<<p_numero<<endl;
	
	system("PAUSE");
	return 0;
}
