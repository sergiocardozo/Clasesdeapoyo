/*
 ============================================================================
 Name        : Clase.c
 Author      : 
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CANTIDAD 3

void mostrarUnArray(int parametroArray[], int cant);
void inicializarUnArray(int parametroArray[], int cant);
void cargaSecuencialUnArray(int parametroArray[], int cant, char mensaje[]);
int dameElMaximo(int parametroArray[], int cant);
int dameElIndiceDelMaximo(int parametroArray[], int cant);
void ordenarDesc(int parametroArray[], int cant);
void ordenarAsc(int parametroArray[], int cant);

int main ()
{
	int miArray[CANTIDAD]; // direccion de memoria donde empezamos a escribir

	inicializarUnArray(miArray,CANTIDAD -1);
	cargaSecuencialUnArray(miArray,CANTIDAD,("Ingrese una edad"));
	cargaSecuencialUnArray(miArray,CANTIDAD,("Ingrese una altura"));
	cargaSecuencialUnArray(miArray,CANTIDAD,("Ingrese temperatura"));
	mostrarUnArray(miArray,CANTIDAD);
	int maximo = dameElMaximo(miArray,CANTIDAD);
	printf("maximo: %d",maximo);
	int indiceMaximo = dameElIndiceDelMaximo(miArray,CANTIDAD);
	printf("maximo: %d",indiceMaximo);
	return 0;
}


void mostrarUnArray(int parametroArray[], int cant)
{
	int indice;

	for(indice = 0;indice<CANTIDAD;indice++)
	{

	printf("\n numero :%d", parametroArray[indice]);

	}

}
void inicializarUnArray(int parametroArray[], int cant)
{

	int indice;

	for (indice = 0;indice<CANTIDAD;indice++)
		{
			parametroArray[indice]=0;

		}
}
void cargaSecuencialUnArray(int parametroArray[], int cant, char mensaje[])
{

	int indice;

	for(indice = 0;indice<CANTIDAD;indice++)
	{
			printf(mensaje);
			scanf("%d",&parametroArray[indice]);
	}

}

int dameElMaximo(int parametroArray[], int cant)
{
	int indice;
	int maximo;

	for(indice=0;indice<cant;indice++)
	{
		if(indice == 0 || parametroArray[indice]>maximo)
		{
			maximo=parametroArray[indice];

		}
	}
	return maximo;

}

int dameElIndiceDelMaximo(int parametroArray[], int cant)
{
		int indice;
		int indiceDelMaximo;
		int maximo;

		for(indice=0;indice<cant;indice++)
		{
			if(indice == 0 || parametroArray[indice]>maximo)
			{
				maximo=parametroArray[indice];
				indiceDelMaximo=indice;

			}
		}
		return indiceDelMaximo;
}

void ordenarDesc(int parametroArray[], int cant){
	int indice;
	int siguiente;
	int aux;
	for (indice=0;indice<cant-1;indice++)
	{
		for(siguiente=indice+1;siguiente<cant;siguiente++)
		{
			if(parametroArray[indice]<parametroArray[siguiente]){
				aux=parametroArray[indice];
				parametroArray[indice]=parametroArray[siguiente];
				parametroArray[siguiente]=aux;
			}
		}

	}
}
void ordenarAsc(int parametroArray[], int cant){
	int indice;
		int siguiente;
		int aux;
		for (indice=0;indice<cant-1;indice++)
		{
			for(siguiente=indice+1;siguiente<cant;siguiente++)
			{
				if(parametroArray[indice]>parametroArray[siguiente]){
					aux=parametroArray[indice];
					parametroArray[indice]=parametroArray[siguiente];
					parametroArray[siguiente]=aux;
				}
			}

		}
}

/* aux =array[1];
 * array[1]=array[0];
 * array[0]=aux;
 * */
