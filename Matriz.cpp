#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int preenche(int A[30][30]){
	int i,j,n;
	cout<<"Digite a ordem da matriz";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<"Digite o termo " <<i+1 <<"x" <<j+1 <<"\n";
			cin>>A[i][j];
	}}
	return n;
}
int zerar(int B[30][30], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			B[i][j]=0;
		}}
return 0;
}


int teste(int A[30][30],int B[30][30],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(A[i][j]>0){
				B[i][j]=B[i][j]+1;
			}
			if(A[i][j]<0){
				B[i][j]=B[i][j]-1;
			}
			if(A[i][j]==0 || A[i][j] == NULL){
				B[i][j]=0;
			}
}}
return 0;
}
int imprime(int A[30][30], int n){
	int i,j;
	cout<<"\n";
	for(i=0;i<n;i++){
		cout<<"\n";
		for(j=0;j<n;j++){
			cout<<A[i][j]<<" ";
}}
return 0;
}

int main(){
	int A[30][30],n;
	int B[30][30];
	n=preenche(A);
	zerar(B,n);
	teste(A,B,n);
	imprime(A,n);
	imprime(B,n);
	
}
