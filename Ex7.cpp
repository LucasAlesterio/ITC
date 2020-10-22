#include <iomanip>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
using namespace std;
typedef struct {
char nome[50];
char data[10];
int idade;
float salario;
}empregado;

int le_empregado(empregado E[],int n){
	for (int i=0; i<n; i++) {
	fflush(stdin);
	cout<<"Digite os dados do empregado numero "<< i+1 <<" :\n";
	cout<<"Nome: ";
	cin.getline (E[i].nome, 50);
	cout<<"Data de nascimento: ";
	cin.getline (E[i].data, 10);
	
	cout<<"Idade: ";
	cin>>E[i].idade;
	cout<<"Salario: ";
	cin>>E[i].salario;
}}

int mostra_empregado(empregado E[],int n){
	for (int i=0; i<n; i++) { 
	cout<<"\nEmpregado numero "<< i+1 <<" :";
	cout<<"\nNome: ";
	cout<<E[i].nome;
	cout<<"\nData de nascimento: ";
	cout<<E[i].data;
	cout<<"\nIdade: ";
	cout<<E[i].idade;
	cout<<"\nSalario: ";
	cout<<E[i].salario;
}}
int atualiza_salario(empregado E[],int n){
	for (int i=0; i<n; i++){
		if(E[i].salario<=880.50){
			E[i].salario=E[i].salario*1.15;
			break;
		}
		if(E[i].salario>880.50 && E[i].salario<=5000){
			E[i].salario=E[i].salario*1.1;
			break;
		}
		if(E[i].salario>5000){
			E[i].salario=E[i].salario*1.05;
			break;
		}
	}
}
int main(){
	empregado E[100];
	int n;
	cout<<"\nDigite a quantidade de empregados a serem cadastrados: ";
	cin>>n;
	le_empregado(E,n);
	atualiza_salario(E,n);
	mostra_empregado(E,n);
	
	
}
