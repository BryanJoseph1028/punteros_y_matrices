// new = reserva un espacio en memoria
// delete [] = libera el espacio reservado en memoria
#include<iostream>
#include <stdlib.h> // new and delete  

using namespace std;

int main(){
int total=0,*p_notas;

cout<<"Cuantas Notas Desea Ingresar: ";
cin>>total;	

p_notas = new int[total];

for (int i=0;i<total;i++){
cout<<"Ingrese Nota"<<i<<":";	
cin>>p_notas[i];

}

for (int i=0;i<total;i++){
cout<<"Nota"<<i<<":"<<p_notas[i]<<endl;	
}
delete[] p_notas;
	system("PAUSE");
	return 0;
}
