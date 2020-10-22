#include<iostream>
 #include<string.h> 
 #define M 3
 #define N 21 
 using namespace std;
int ler(char nomes[M][N]){
  cout << "Digite " << M << " palavras de no maximo " << N-1 << " caracteres" << endl; 
  for(int i = 0; i < M; i++) { 
  cout << i+1 << ": "; 
  cin >> nomes[i]; 
}}
int imprime( char nomes[M][N]){
  for(int i = 0; i < M; i++) {
   cout << nomes[i] << endl; 
   } 
return 0;
}
int ordem(char nomes[M][N]){
	char aux[N];
	int i,j=0,a=0;
for(a=0;a<M;a++){
	for(i=j;i<M;i++){
		if(nomes[a][0]>=nomes[i][0]){
			strncpy(aux,nomes[i],N);
			strncpy(nomes[i],nomes[a],N);
			strncpy(nomes[a],aux,N);
		}
	}	j++;}
	return 0;
}
int main() {
 char nomes[M][N];
  ler(nomes);
  ordem(nomes);
  cout << "As palavras em ordem sao as seguintes: "<< endl; 
  imprime(nomes);
   return 0;
    }
