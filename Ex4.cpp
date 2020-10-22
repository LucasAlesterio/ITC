#include<iostream>
 #include<string.h> 
 #define M 50
 #define N 50 
 using namespace std;
 int ler(char nomes[M][N]){
  int num;
  cout << "\nDigite a quantidade de nomes a serem cadastrados:"; 
  cin>>num;
  for(int i = 0; i < num; i++) { 
  cout << i+1 << ": "; 
  cin >> nomes[i]; 
}return num;
}


int prim_ult(char nomes[M][N],int num){
	char primeiro[M],ultimo[M];
	strncpy(primeiro,nomes[0],N);
	for(int i=0;i<num;i++){
		if(primeiro[0]>nomes[i][0]){
			strncpy(primeiro,nomes[i],N);
		}
		if(ultimo[0]<nomes[i][0]){
			strncpy(ultimo,nomes[i],N);
		}
	}
	cout<<"\nO primeiro seria: "<<primeiro<<"\n O ultimo seria: "<<ultimo;
	return 0;
}
 
 
 int main(){
 char nomes[M][N];
 int num;
 num=ler(nomes);
 prim_ult(nomes,num);
 return 0;
}
