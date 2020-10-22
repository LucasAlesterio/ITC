#include <iostream>
#include <iomanip>
#include<conio.h>
#include<stdio.h>
#include<string.h> 
#include<math.h>
using namespace std;
typedef struct { 
float a;
float b;
float hip;
} triang_ret;
triang_ret triangulo;
int ler(triang_ret){
	cout<<"\n Digite o valor do lado a: ";
	cin>>triangulo.a;
	cout<<"\n Digite o valor do lado b: ";
	cin>>triangulo.b;
return 0;}

int calc(triang_ret){
	triangulo.hip=sqrt((triangulo.a*triangulo.a)+(triangulo.b*triangulo.b));
	cout<<endl<<"O valor da hipotenusa e: "<< triangulo.hip;
return 0;}

int main(){

	ler(triangulo);
	calc(triangulo);
return 0;
}
