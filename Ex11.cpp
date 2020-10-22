#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
typedef struct {
char nome[50];
char matricula[50];
char sexo;
float p1,p2,p3,trab;
int faltas;
}aluno;
////////////////////////////////////////////////////////////////////////////////////////
int f1(aluno A[],int a){
	for(int n=0;n<a;n++){
	cout<<"\nPreencha com os dados do aluno\nNome : ";
	cin>>A[n].nome;
	cout<<"\nMatricula: ";
	cin>>A[n].matricula;
	cout<<"\nCodigo do sexo,'f' para feminino e 'm' para masculino ";
	cin>>A[n].sexo;
	cout<<"\nNota da P1: ";
	cin>>A[n].p1;
	cout<<"\nNota da P2: ";
	cin>>A[n].p2;
	cout<<"\nNota da P3: ";
	cin>>A[n].p3;
	cout<<"\nNota do trabalho: ";
	cin>>A[n].trab;
	cout<<"\nNumero de faltas: ";
	cin>>A[n].faltas;
}
return 0;}
////////////////////////////////////////////////////////////////////////////////////////
int f2(aluno A[],int a, float nota_final[]){
	for(int n=0;n<a;n++){
	nota_final[n]=(A[n].p1+A[n].p2+A[n].p3+A[n].trab);
    }
    for(int i=0;i<a;i++){
    	cout<<"\nNota final: "<<nota_final[i];
	}
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
float f3(aluno A[],int n,float nota_final[]){
	float media;
	for(int i=0;i<n;i++){
		media=media+nota_final[i];
	}
	media=media/n;
	cout<<"\nMedia da turma: "<<media;
	return media;
}
////////////////////////////////////////////////////////////////////////////////////////
int f4(aluno A[],int n, float nota_final[]){
	int cont=0;
	for(int i=0;i<n;i++){
		if(A[i].sexo=='f' && nota_final[i]>=60){
			cont++;
		}
	}
	cout<<"\nHa "<<cont<<" alunos do sexo feminino";
return cont;}
////////////////////////////////////////////////////////////////////////////////////////
int f5(aluno A[],int n,float nota_final[]){
	int cont=0;
	for(int i=0;i<n;i++){
		if(A[i].sexo=='m' && nota_final[i]>=60){
			cont++;
		}
	}
	cout<<"\nHa "<<cont<<" alunos do sexo masculino";
return cont;}
////////////////////////////////////////////////////////////////////////////////////////*****
int f6(aluno A[],int n,float media,float nota_final[]){
	float cont=0;
	 float porcento;
	 for(int i=0;i<n;i++){
	 	if(nota_final[i]>media){
	 		cont=cont+1;
		 }
	 }
	 porcento=(cont/n);
	 cout<<"\nA porcentagem de alunos com nota final acima da media e: "<<porcento*100<<"%";
return 0;}
////////////////////////////////////////////////////////////////////////////////////////
int f7(aluno A[],int n,float nota_final[]){
	int i, j,min;
	char aux[50]; 
	for(i = 0; i < n-1; i++) {
	 min = i; 
	 for(j = i+1; j < n; j++) {
	  if(nota_final[j] >nota_final[min]) { 
	  min = j; 
	  } } 
	  strncpy(aux,A[i].nome,50);
	  strncpy(A[i].nome,A[min].nome,50);
	  strncpy(A[min].nome,aux,50);
	  /////
	  char aux1[50];
	  strncpy(aux1,A[i].matricula,50);
	  strncpy(A[i].matricula,A[min].matricula,50);
	  strncpy(A[min].matricula,aux1,50);
	  /////
	  char aux2;
	  aux2=A[i].sexo;
	  A[i].sexo=A[min].sexo;
	  A[min].sexo=aux2;
	  /////
	  float aux3;
	  aux3=A[i].p1;
	  A[i].p1=A[min].p1;
	  A[min].p1=aux3;
	  /////
	  float aux4;
	  aux4=A[i].p2;
	  A[i].p2=A[min].p2;
	  A[min].p2=aux4;
	  /////
	  float aux5;
	  aux5=A[i].p3;
	  A[i].p3=A[min].p3;
	  A[min].p3=aux5;
	  /////
	  float aux6;
	  aux6=A[i].trab;
	  A[i].trab=A[min].trab;
	  A[min].trab=aux6;
	  /////
	  int aux7;
	  aux7=A[i].faltas;
	  A[i].faltas=A[min].faltas;
	  A[min].faltas=aux7;
	  /////
	  float aux8;
	  aux8=nota_final[i];
	  nota_final[i]=nota_final[min];
	  nota_final[min]=aux8;
    }
	  /////**********************////
	  for(int j=0;j<n;j++){
	  cout<<"\n\nNome: "<<A[j].nome;
	  cout<<"\nMatricula: "<<A[j].matricula;
	  cout<<"\nCodigo sexo: "<<A[j].sexo;
	  cout<<"\nNota P1: "<<A[j].p1;
	  cout<<"\nNota P2: "<<A[j].p2;
	  cout<<"\nNota P3: "<<A[j].p3;
	  cout<<"\nNota trabalho: "<<A[j].trab;
	  cout<<"\nNota final: "<<nota_final[j];
	  }
	  return 0;  }
	  ////////////////////////////////////////////////////////////////////////////////////////
int f8(aluno A[],int n,float nota_final[]){
	for(int j=0;j<n;j++){
	  cout<<"\n\nNome: "<<A[j].nome;
	  cout<<"\nMatricula: "<<A[j].matricula;
	  cout<<"\nCodigo sexo: "<<A[j].sexo;
	  cout<<"\nNota final: "<<nota_final[j];
	  if(nota_final[j]>=60){
	  	cout<<"\nAPROVADO";
	  }
	  else{
	  	cout<<"\nREPROVADO";
	  }
	  }return 0;
}
	  ////////////////////////////////////////////////////////////////////////////////////////
int main(){
	aluno A[10];
	int n;
	float nota_final[10],media;
	int f,m,op;
	cout<<"\nDigite a quantidade de alunos a serem cadastrados: ";
	cin>>n;
	f1(A,n);
	f2(A,n,nota_final);
	media=f3(A,n,nota_final);
	
	do{
		cout<<"\n\nMENU: \n1 - Nota media da turma. \n2 - Numero de alunos, do sexo feminino, aprovados. ";
		cout<<"\n3 - Numero de alunos, do sexo masculino, aprovados. \n4 - Porcentagem de alunos com nota final acima da nota media.";
		cout<<"\n5 - Classificar os alunos, pela nota final. \n6 - Gerar os boletins.\n7 - Sair do programa. \nQual a sua opcao?";
		cin>>op;
		switch(op){
			case 1:
				media=f3(A,n,nota_final);
				break;
			case 2:
				f=f4(A,n,nota_final);
				break;
			case 3:
				m=f5(A,n,nota_final);
				break;
			case 4:
				f6(A,n,media,nota_final);
				break;
			case 5:
				f7(A,n,nota_final);
				break;
			case 6:
				f8(A,n,nota_final);
		}
	}while(op!=7);
	return 0;}
