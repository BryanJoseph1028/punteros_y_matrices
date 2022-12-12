#include<iostream>
#include <stdlib.h> // new and delete  

using namespace std;

int main(){
int fila_estudiante=0,columna_notas=0,**pm_notas;

cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila_estudiante;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna_notas;	
pm_notas = new  int *[fila_estudiante];
for (int i=0;i<fila_estudiante;i++){
pm_notas[i] = new int[columna_notas]; 	
}
cout<<"--------------Ingrese Notas--------------"<<endl;
for (int i=0;i<fila_estudiante;i++){
for (int ii=0;ii<columna_notas;ii++){
	cout<<"Estudiante: "<<i<<" ,Nota: "<<ii<<":";
	cin>>*(*(pm_notas+i)+ii);
	}
	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<fila_estudiante;i++){
for (int ii=0;ii<columna_notas;ii++){
	cout<<*(*(pm_notas+i)+ii)<<endl;
	}
}
// Liberar el espacio reservado en memoria
for (int i=0;i<fila_estudiante;i++){
	delete [] pm_notas[i];
}

delete [] pm_notas;

	system("PAUSE");
	return 0;
	
	
}

