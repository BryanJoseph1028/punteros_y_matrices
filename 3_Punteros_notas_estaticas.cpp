#include<iostream>

using namespace std;

int main(){
int notas[4];//,notas2[4],*p_notas2;
int *p_notas = notas;

for (int i=0;i<4;i++){
cout<<"Ingrese Nota"<<i<<":";	
cin>>notas[i];
//cin>>notas2[i];
}

//p_notas2 =notas2;
for (int i=0;i<4;i++){
//cout<<"Nota"<<i<<":"<<notas[i]<<endl;	
cout<<"Nota"<<i<<":"<<*p_notas<<endl;	
cout<<"Nota"<<i<<":"<<p_notas<<endl;	
//cout<<"Nota2"<<i<<":"<<*p_notas2<<endl;	
//cout<<"Nota2:"<<i<<":"<<p_notas2<<endl;
p_notas++;
//p_notas2++;
}
	
	system("PAUSE");
	return 0;
}
