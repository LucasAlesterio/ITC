#include<iostream>
 #include<string.h> 
 #define M 3
 #define N 21 
 using namespace std;
 a(char nomes[M][N]){
 	char aux[N];
 	int i=1,a=0;
 	strncpy(aux,nomes[i],N);
			strncpy(nomes[i],nomes[a],N);
			strncpy(nomes[a],aux,N);
 }
 int main(){
char nomes[M][N];
  cout << "Digite " << M << " palavras de no maximo " << N-1 << " caracteres" << endl; 
  for(int i = 0; i < M; i++) { 
  cout << i << ": "; 
  cin >> nomes[i];}
  a(nomes);
  cout << "As palavras lidas foram as seguintes "<< endl; 
  for(int i = 0; i < M; i++) {
   cout << nomes[i] << " \t(com tamanho = " << strlen(nomes[i]) << ")" << endl; 
   } 
   return 0;}
