
/*
 ============================================================================
06. Escriba un programa para leer y mostrar un cuadrado (usando funciones).
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//PROTOTIPOS
void llenarCuadrado(char arrayChar[7][7],int );
void mostrarCuadrado(char arrayChar[7][7],int );


int main() {
		int n;
		char arrayChar[7][7];
	    printf("Ingrese el tamaño del cuadrado : \n");
		scanf("%d",&n);
		llenarCuadrado(arrayChar,n);
		mostrarCuadrado(arrayChar,n);

}

//SUBPROGRAMAS
	void llenarCuadrado(char arrayChar[7][7],int n){

		int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				arrayChar[i][j]='+';
			}
		}
	}

	void mostrarCuadrado(char arrayChar[7][7],int n){
		int i,j;
				for(i=0;i<n;i++)
				{
					 printf("\n");
					for(j=0;j<n;j++)
					{
						 printf("\t %c",arrayChar[i][j]);
					}
				}
	}



