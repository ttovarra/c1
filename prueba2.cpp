#include <stdio.h>
#include<conio.h>

float arreglo1[100];
float arreglo2[100];
int valor,i,x=100;
int main()
{
 printf("Programa que llena un arreglo y pone de manera inversa los valores de este, en otro");
 printf("Introduce la dimension del arreglo");
 scanf("%i",&x);
 arreglo1[x];
 arreglo2[x];
 for(i=0;i<=(x-1);i++)
	 {
	 printf("Introduce el valor en la posicion %i :",(i+1));
	 scanf("%f",&valor);
	 arreglo1[i]=valor;
	 }
 for(i=(x-1);i>=0;i--)
	 {
	 arreglo2[i]=(arreglo1[(x-1)-i]);
	 }
 for(i=0;i<=(x-1);i++)
	 {
	 printf("El valor del arreglo 2 en la posicion %i es %.1f : ",(i+1),arreglo2[i]);
	 }
 getch();
}
