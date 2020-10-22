#include<iostream>
 #include<string.h> 
 #define N 21 
 using namespace std;
 int ler(char palavra[N]){
  cout << "Digite uma palavra: "<< endl; 
  cin >> palavra; 
return 0;
}
int inverter(char palavra[N]){
   int i,j,tamanho;
   char aux;
   tamanho=strlen(palavra);
   for(i=0,j=tamanho-1;i<((tamanho-1)/2);i++,j--){
    aux=palavra[i];
 	palavra[i]=palavra[j];
 	palavra[j]=aux;
   }
}

 int main(){
 char palavra[N];
 ler(palavra);
 inverter(palavra);
 cout<<"\nPalavra invertida e:"<<palavra;
 return 0;
 }
