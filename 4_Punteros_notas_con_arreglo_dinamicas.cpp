#include<iostream>

using namespace std;

int main(){
int total=0;

cout<<"Cuantas Notas Desea Ingresar: ";
cin>>total;	
int notas[total];
int *p_notas = notas;
for (int i=0;i<total;i++){
cout<<"Ingrese Nota"<<i<<":";	
cin>>notas[i];

}


for (int i=0;i<total;i++){
cout<<"Nota"<<i<<":"<<*p_notas<<endl;	
p_notas++;

}
	
	system("PAUSE");
	return 0;
}
