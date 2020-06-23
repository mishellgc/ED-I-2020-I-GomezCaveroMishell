/*
 ============================================================================
8.Escriba un programa para agregar dos matrices de 3 x 3 utilizando punteros.
En el desarrollo se agrega dos matrices 3x3 y se muestra en pantalla
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void llenarMatriz1(int (*)[3]);
void llenarMatriz2(int (*)[3]);
void mostrarMatriz1(int(*)[3]);
void mostrarMatriz2(int(*)[3]);

int main() {
	int matriz1 [3][3];
	int matriz2 [3][3];
	llenarMatriz1(matriz1);
	llenarMatriz2(matriz2);
	mostrarMatriz1(matriz1);
	mostrarMatriz2(matriz2);

}


		// AGREGAMOS UNA MATRIZ 1
		void llenarMatriz1(int (*matriz1)[3])
		{
			int i,j;
			printf("\n Ingrese los elementos de la matriz 1 :");

			for(i=0; i<3; i++){
				printf("\n");
				for(j=0;j<3;j++){
				scanf("%d",&(matriz1[i][j]));
				}
			}
		}

		// AGREGAMOS UNA MATRIZ 2
		void llenarMatriz2(int (*matriz2)[3])
		{
			int i,j;
			printf("\n Ingrese los elementos de la matriz 2 :");

			for(i=0; i<3; i++){
				printf("\n");
				for(j=0;j<3;j++){
				scanf("%d",&(matriz2[i][j]));
				}
			}
		}

		// MOSTRAMOS LA MATRIZ 1
		void mostrarMatriz1(int(*matriz1)[3]){
			int i,j;
			printf("\n Los elementos de la Matriz 1 son :");
			for(i=0; i<3; i++){
				printf("\n");
				for(j=0;j<3;j++){
					printf("\t %d",*(*(matriz1 + i)+j)); // me da la posición
				}

			}
		}

		// MOSTRAMOS LA MATRIZ 2
				void mostrarMatriz2(int(*matriz2)[3]){
					int i,j;
					printf("\n Los elementos de la Matriz 2 son :");
					for(i=0; i<3; i++){
						printf("\n");
						for(j=0;j<3;j++){
							printf("\t %d",*(*(matriz2 + i)+j));
						}

					}
				}


