#include<iostream>
#include<string.h>
#define M 50
#define N 50
using namespace std;
int ler(char nomes[M][N],float nota[M]){
int num;
  cout << "Digite a quantidade de alunos a serem cadastrados: "<< endl;
  cin>>num;
  for(int i = 0; i < num; i++) { 
  cout <<"\nAluno numero " <<i+1<<":" << "\nNome: "; 
  cin >> nomes[i];
  cout<<"Nota: ";
  cin>>nota[i];
}
return num;
}
float calcmedia(float nota[M],int num){
	float media=0;
	for(int i=0;i<num;i++){
		media=media+nota[i];
	}
	media=media/num;
	return media;
}
int alunosacima(char nomes[M][N],float nota[M],int num,float media){
	cout<<"Alunos acima da media:\n";
	for(int i=0;i<num;i++){
		if(nota[i]>=media){
			cout<<"Aluno: "<<nomes[i]<<", nota: "<< nota[i];
		}
	}
return 0;
}
int main(){
char nomes[M][N];
float nota[M],media;
int num;
num=ler(nomes,nota);
media=calcmedia(nota,num);
alunosacima(nomes,nota,num,media);
}
