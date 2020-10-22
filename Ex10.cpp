#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
typedef struct {
char nome[50];
float telefone;
}pessoas;
////////////////////////////////////////////////////////////////////////////////////////
int le_pessoa(pessoas P[],int n){
	cout<<"\nDigite o nome: ";
	cin>>P[n].nome;
	cout<<"\nDigite o numero de telefone: ";
	cin>>P[n].telefone;
	n++;
return n;}
////////////////////////////////////////////////////////////////////////////////////////
int lista_pessoas(pessoas P[],int n){
	cout<<"\nLista: ";
	for(int i=0;i<n;i++){
		cout<<"\n\nNome: "<<P[i].nome;
		cout<<"\nTelefone: "<<P[i].telefone;
	}return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
int ordena_pessoas(pessoas P[],int n){
	int i, j,min;
	char aux[50]; 
	for(i = 0; i < n-1; i++) {
	 min = i; 
	 for(j = i+1; j < n; j++) {
	  if(P[j].nome[0] <P[min].nome[0]) { 
	  min = j; 
	  } } 
	  strncpy(aux,P[i].nome,50);
	  strncpy(P[i].nome,P[min].nome,50);
	  strncpy(P[min].nome,aux,50);
	   }
	   for(int a=0;a<n;a++){
	   	cout<<"\n\nNome: "<<P[a].nome;
		cout<<"\nTelefone: "<<P[a].telefone;
	   }
	    }
////////////////////////////////////////////////////////////////////////////////////////
int busca_pessoa(pessoas P[],int n){
	char busca[50];
	int teste,a=0;
	cout<<"\nDigite o nome da pessoa para pesquisar: ";
	cin>>busca;
	for(int i=0;i<n;i++){
	teste=strcmp(busca,P[i].nome);
	if(teste==0){
		a=1;
		cout<<"\nNome encontrado, telefone: "<<P[i].telefone;
	}}
	if(a==0){
		cout<<"Nome nao encontrado";
	}return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
int atualiza_pessoa(pessoas P[],int n){
	char busca[50];
	int teste,a=0;
	cout<<"\nDigite o nome da pessoa para pesquisar: ";
	cin>>busca;
	for(int i=0;i<n;i++){
	teste=strcmp(busca,P[i].nome);
	if(teste==0){
		a=1;
		cout<<"\nDigite o novo numero de telefone: ";
		cin>>P[i].telefone;
    }
    if(a==0){
		cout<<"Nome nao encontrado";
    }}return 0;}
////////////////////////////////////////////////////////////////////////////////////////
int apaga_pessoa(pessoas P[],int n){
	char busca[50];
	int teste,a=0,b=0;
	cout<<"\nDigite o nome da pessoa para pesquisar: ";
	cin>>busca;
	for(int i=0;i<n;i++){
	teste=strcmp(busca,P[i].nome);
	if(teste==0){
		a=1;
		cout<<"\n\nNome: "<<P[i].nome;
		cout<<"\nTelefone: "<<P[i].telefone;
		cout<<"\nTem certeza que deseja apagar este contato?Digite 1 para sim e 2 para nao:";
		cin>>b;
		if(b==1){
			for(int x=(i+1);x<n;x++){
				strncpy(P[x-1].nome,P[x].nome,50);
				P[x-1].telefone=P[x].telefone;
			}
			n=n-1;
		cout<<"Contato excluido com sucesso!";
		}
		if(b==2){
			break;
		}
    }}
    if(a==0){
		cout<<"Nome nao encontrado";
    }return n;
	}
////////////////////////////////////////////////////////////////////////////////////////
int main(){
	pessoas P[100];
	int n=0,op;
	do{
		cout<<"\nMENU: \n1- Cadastrar pessoa\n2- Listar contatos\n3- Ordenar\n4- Buscar pessoa\n5- Atualizar contato\n6- Apagar contato\n7- Sair\n";
		cin>>op;
		switch(op){
			case 1:
				n=le_pessoa(P,n);
				break;
			case 2:
				lista_pessoas(P,n);
				break;
			case 3:
				ordena_pessoas(P,n);
				break;
			case 4:
				busca_pessoa(P,n);
				break;
			case 5:
				atualiza_pessoa(P,n);
				break;
			case 6:
				n=apaga_pessoa(P,n);
				break;	
		}
	}while(op!=7);
	
return 0;
}
