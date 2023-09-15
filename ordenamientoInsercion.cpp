#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[] ={3,2,5,1,4};
	int i,pos,aux;
	
	//Ordenamiento por Insercion
	for(i=0;i<5;i++){
		pos=i;
		aux=numeros[i];
		while((pos>0 )&& (numeros[pos-1]>aux)){
		
		numeros[pos] = numeros[pos-1];
		pos--;
		
		}
		numeros[pos] = aux;
	}
	
	cout<<"Orden Ascendente  ";
	for(i=0;i<5;i++){
		cout<<numeros[i];
	}
	cout<<"\nOrden Descendente ";
	for(i=4;i>-1;i--){
		cout<<numeros[i];
	}
	getch();
	return 0;
}
