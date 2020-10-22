#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int imprime(int A[20][20]){
	int i,j,n=20;
	cout<<"\n";
	for(i=0;i<n;i++){
		cout<<"\n";
		for(j=0;j<n;j++){
			cout<<A[i][j]<<" ";
}}
return 0;
}

int main(){
	int n=20;
	int A[20][20];
	int i,j;
	for(i=0;i< n;i++){
		for(j=0;j<n;j++){
			if((i+j)%2==0){
				A[i][j]=1;
			}
			else{
				A[i][j]=2;
			}
			
}}
imprime(A);
return 0;
}
