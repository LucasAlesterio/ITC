#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
typedef struct {
int COD;
int VAGAS;
int NUM[3];
float CAND;
}vestibular;

int ler(vestibular vest[],int N){
	for(int i=0;i<N;i++){
	cout<<"\nDigite o codigo do curso:";
	cin>>vest[i].COD;
	cout<<"\nDigite o numero de vagas:";
	cin>>vest[i].VAGAS;
	cout<<"\nDigite o numero de candidatos do sexo masculino:";
	cin>>vest[i].NUM[0];
	cout<<"\nDigite o numero de candidatos do sexo feminino:";
	cin>>vest[i].NUM[1];
	///////
	vest[i].NUM[2]=vest[i].NUM[1]+vest[i].NUM[0];
	vest[i].CAND=vest[i].NUM[2]/vest[i].VAGAS;
}return 0;}

int pesquisar(vestibular vest[],int N){
	int codigo;
	cout<<"Digite o codigo a ser pesquisado: ";
	cin>>codigo;
	for(int i=0;i<N;i++){
		if(codigo==vest[i].COD){
		cout<<"\n\nCodigo do curso: "<<vest[i].COD;
		cout<<"\nNumero de vagas: "<<vest[i].VAGAS;
		cout<<"\nNumero de candidatos por vaga: "<<vest[i].CAND<<"\n";
}}}

int maior_cand(vestibular vest[],int N){
	float maior=0;
	int a;
    for(int i=0;i<N;i++){
    	if(vest[i].CAND>maior){
    		maior=vest[i].CAND;
    		a=i;
		}
    }
cout<<"\nCurso com maior numero candidatos por vaga: \n";
cout<<"\nCodigo do curso: "<<vest[a].COD;
cout<<"\nNumero candidato por vaga: "<<vest[a].CAND<<"\n";
    
return 0;
}

int main(){
	vestibular vest[100];
	int n,op;
	
	do{
    
	cout<<"Digite \n-1 para cadastrar\n-2 para mostrar maior candidato por vaga\n-3 para pesquisar\n-4 para limpar a tela\n-5 para sair\n ";
	cin>>op;
	switch(op){
		case 1:
			cout<<"Digite a quantidade a ser cadastrada: ";
			cin>>n;
			ler(vest,n);
			break;
		case 2:
			maior_cand(vest,n);
			break;
		case 3:
			pesquisar(vest,n);
			break;
		case 4:
			system("cls");
			break;
	}}while(op!=5);
	return 0;
}
