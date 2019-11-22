
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
struct Nodo{
	int Nom;
	Nodo *siguiente;
};
void imprimirpila(Nodo *&, int&);
void agregarpila(Nodo *&,int);
int main(){
	int Nom,dato;
	char si;
	Nodo *pila=NULL;
	do{
 		cout<<"Agrega tu registro:"<<endl;
 		cin>>dato;
 		agregarpila(pila,dato);
		cout<<"quieres anotar otro registro:"<<endl;
		cin>>si;
	}while(si=='s'||si=='S');
	cout<<"los registros que salen son: "<<endl;
	while(pila != NULL){
		imprimirpila(pila,Nom);
		cout<<Nom<<endl;
	}
	 getch();
	return 0;
}
void agregarpila(Nodo *&pila,int n)
{
	Nodo *nuevonodo=new Nodo();
	nuevonodo->Nom=n;
	nuevonodo->siguiente=pila;
	pila=nuevonodo;
}
void imprimirpila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n=aux->Nom
	;
	pila=aux->siguiente;
	delete aux;
}

 
