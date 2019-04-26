#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
void palindromo ();
void instrucciones ();
int main (){
	instrucciones ();
	palindromo ();	
 return 0;
}
void palindromo (){ 
int contador = 0, resultado, longitudpalabra, largopalabra; 
	char palabra [1024];
	cin.getline(palabra, 1024, '\n'); 
	strlwr (palabra);
    largopalabra = strlen(palabra);
    longitudpalabra = largopalabra - 1; 
for ( contador ; contador<largopalabra  ; contador ++ ){
	
      if (palabra [contador]==palabra [longitudpalabra-contador])
      resultado = 1;
	  else
	  resultado = 0; 	
	}
	cout<<resultado<<endl;
	if (resultado ==1)
	cout<<"la Palabra es un palindromo\n";
	else 
	cout<<"La palabra no es un palindromo\n";
}
void instrucciones (){
	cout<<"Este es un programa que determina si una palabra o frase ingresada es un palindromo o no.\n";
}





