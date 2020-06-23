/*
 ============================================================================
09. Escriba un programa que calcule el producto de los elementos que están
almacenados en la diagonal sobre la diagonal principal.
OBSERVACION:
EL PROGRAMA REALIZA LA MULTIPLICACIÓN DE LAS DOS DIAGONALES CONSIDERANDO
SOLO UNA VEZ EL ELEMENTO DEL MEDIO QUE SE REPITE
EJEMPLO :
SI LA MATRIZ TIENE LA SIGUIENTE FORMA

    1   2   3
    4   5   6
    7   8   9
ENTONCES EL PRODUCTO DE LAS DIAGONALES ES 1*5*9*7*3 =945
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>


//PROTOTIPOS
void llenarMatriz(int matriz[7][7],int );
void mostrarDiagonal(int matriz[7][7],int );


int main(){

		int n;
		int matriz [7][7];

	    printf("Ingrese el tamaño de la Matriz : \n");
		scanf("%d",&n);
		llenarMatriz(matriz,n);
		mostrarDiagonal(matriz,n);

}

//SUBPROGRAMAS
	void llenarMatriz(int matriz[7][7],int n){

		int i,j;
		printf("Ingrese los elementos de la Matriz : \n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&matriz [i][j]);
			}
		}
	}

	void mostrarDiagonal(int matriz[7][7],int n){
		int i,j,result=1;

				for(i=0;i<n;i++)
				{
					printf("\n");
					for(j=0;j<n;j++)
					{
						if((i==j)||(i+j==n-1)){

						   result=matriz[i][j]*result;

						}

					}
				}
			printf("PRODUCTO DE DIAGONALES :");
            printf("\t %d",result);

	}


