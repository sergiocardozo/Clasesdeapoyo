
#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3


int cargarNumerosTest(int*, int, char mensaje[]);
int mostrarDatosNumericos(int*, int);
int cargarPalabrasTest(char listadoDePalabras[][50], int, char mensaje[]);
int printListadoDePalabras(char listadoDePalabras[][50], int cantidad);
int printConjuntoArrays(char apellidos[][50], char nombres[][50],int* edades, int cantidad);
void ordenarPorEdades(char nombres[][50],char apellido[][50],int edades[], int tamanio);

int main(void) {


	char apellidos[CANTIDAD][50];
	char nombres[CANTIDAD][50];
	int edades[CANTIDAD];


	//mostrarDatosNumericos(datoNumerico, CANTIDAD);
	cargarPalabrasTest(apellidos, CANTIDAD, "Ingrese el nombre: \n");
	cargarPalabrasTest(nombres, CANTIDAD, "Ingrese el apellido: \n");
	cargarNumerosTest(edades, CANTIDAD, "Ingrese la edad: \n");
	printConjuntoArrays(apellidos, nombres, edades, CANTIDAD);
	ordenarPorEdades(apellidos,nombres,edades,CANTIDAD);

}

int cargarNumerosTest(int* datoNumerico, int cantidad, char mensaje[])
{
	int i;
	int entry;
	for(i=0; i < cantidad; i++)
	{
		printf(mensaje);
		scanf("%d", &entry);
		datoNumerico[i] = entry;
	}

	return 0;
}

int mostrarDatosNumericos(int* datoNumerico, int cantidad)
{
	int i;
	for(i=0; i < cantidad; i++)
	{
		printf("El numero Ingresado es %d:\n", datoNumerico[i]);
	}
	return 0;
}

int cargarPalabrasTest(char listadoDePalabras[][50],int cantidad, char mensaje[])
{
	int i;
	for(i=0;i< cantidad;i++)
	{
		printf(mensaje);
		scanf("%s", listadoDePalabras[i]);
	}
	return 0;
}

int printListadoDePalabras(char listadoDePalabras[][50], int cantidad)
{
	int i;
	for(i=0;i< cantidad;i++)
	{
		printf("La palabra es: %s\n",listadoDePalabras[i]);
	}
	return 0;
}

int printConjuntoArrays(char apellidos[][50], char nombres[][50],int* edades, int cantidad)
{
	int i;
	for(i=0;i< cantidad;i++)
	{
		printf("El apellido es:%s\n El nombre es:%s\n La edad es:%d\n",apellidos[i], nombres[i], edades[i]);
	}
	return 0;
}
void listar(char nombres[][50], char apellido[50],int edades[]){

}
void ordenarPorEdades(char nombres[][50],char apellido[][50],int edades[], int tamanio){
	int auxiliarEdades;
	char auxiliarNombres;
	char auxiliarApellido;
	int i;
	int j;
	for(j=i;j<tamanio-1;j++){
		for(j=i+1;j<tamanio;j++){
			if(edades[i]<edades[i+1])
			{
				auxiliarEdades=edades[i];
				edades[i]=edades[i+1];
				edades[i+1]=auxiliarEdades;

				auxiliarApellido=apellido[i][50];
				apellido[i][50]=apellido[i+1];
				apellido[i+1][50]=auxiliarApellido;

				auxiliarNombres=nombres[i][50];
				nombres[i][50]=nombres[i+1];
				nombres[i+1][50]=auxiliarNombres;
			}
		}

	}

}




