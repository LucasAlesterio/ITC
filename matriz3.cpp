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
int divisao(int A[30][30], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i != j){
				A[i][j]=A[i][j]/A[i][i];
			}}}
return 0;
}
int main(){
	int a[30][30],n;
	n=preenche(a);
	imprime(a,n);
	divisao(a,n);
	imprime(a,n);
	return 0;
}
	
