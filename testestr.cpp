#include<iostream>
 #include<string.h> 
 #define M 3
 #define N 21 
 int main(){
 	char n[N]="ale";
 	char a[N]="lucas";
 	char aux[N];
 	strncpy(aux,n,N);
 	strncpy(n,a,N);
 	strncpy(a,aux,N);
 	printf("1:%s 2:%s",n,a);
 	return 0;
 }
