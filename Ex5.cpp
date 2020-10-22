#include<iostream>
 #include<string.h> 
 #define M 50
 #define N 50 
 using namespace std;
 int ler(char nomes[M][N],char telefone[N][M]){
 	int num;
  cout << "Digite a quantidade a ser cadastrada: " << endl; 
  cin>> num;
  for(int i = 0; i < num; i++) { 
  cout << i+1 << ": Nome:"; 
  cin >> nomes[i];
  cout<<"\nTelefone: ";
  cin>>telefone[i];
}return num;
}
int imprime( char nomes[M][N],char telefone[N][M],int num){
  for(int i = 0; i < num; i++) {
   cout << nomes[i] << "	"<<telefone[i]<<endl; 
   } 
return 0;
}
int ordem(char nomes[M][N],int num){
	char aux[N];
	int i,j=0,a=0;
for(a=0;a<num;a++){
	for(i=j;i<num;i++){
		if(nomes[a][0]>=nomes[i][0]){
			strncpy(aux,nomes[i],N);
			strncpy(nomes[i],nomes[a],N);
			strncpy(nomes[a],aux,N);
		}
	}	j++;}
	return 0;
}
int main() {
 char nomes[M][N], telefone[N][M];
 int num;
  num=ler(nomes,telefone);
  ordem(nomes,num);
  cout << "Lista: "<< endl; 
  imprime(nomes,telefone,num);
   return 0;
    }
