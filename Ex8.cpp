#include <iomanip>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include <assert.h>
using namespace std;
typedef struct {
int p;
int q;
}racional;

int ler(racional R[]){
	cout<<"\nDigite o primeiro numerador :";
	cin>>R[0].p;
	cout<<"\nDigite o primeiro denominador :";
	cin>>R[0].q;
	cout<<"\nDigite o segundo numerador :";
	cin>>R[1].p;
	cout<<"\nDigite o segundo denominador :";
	cin>>R[1].q;
return 0;}

int mmc(int num1, int num2) {
    int resto, a, b;
    a = num1;
    b = num2;
    do {
        resto = a % b;
        a = b;
        b = resto;
    } while (resto != 0);
    return ( num1 * num2) / a;
}

int soma(racional R[]){
	cout<<"\nSoma: \n";
	int MMC;
	MMC=mmc(R[0].q,R[1].q);
	cout<<(((MMC/R[0].q)*R[0].p)+((MMC/R[1].q)*R[1].p))<<"\n"<<"__\n"<<MMC;
}
int multiplicacao(racional R[]){
	cout<<"\nMultiplicacao: \n";
	cout<<R[0].p*R[1].p<<"\n"<<"__\n"<<R[0].q*R[1].q;
}
int divisao(racional R[]){
	cout<<"\nDivisao: \n";
	cout<<R[0].p*R[1].q<<"\n"<<"__\n"<<R[0].q*R[1].p;
}


int main(){
	racional R[2];
	ler(R);
	soma(R);
	multiplicacao(R);
	divisao(R);
}
