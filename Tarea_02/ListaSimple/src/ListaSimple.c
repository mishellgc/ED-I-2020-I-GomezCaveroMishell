/*
 ============================================================================
 Name        : ListaSimple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//============================================================================
//CONSTANTES
#define MAXLISTA 50
#define ERRORLISTAVACIA -1
#define true 1
#define false 0

//============================================================================
//TIPOS DE DATOS
typedef int bool;

typedef int dato;

typedef struct{
    dato numero;
}ELEMENTO;

typedef struct {
	ELEMENTO vector[MAXLISTA];
	int nElementos;
} LISTA;


//============================================================================
//METODOS

// INICIALIZANDO LA LISTA

void inicializarLista(LISTA *list) {
	(*list).nElementos = 0; // lista.nElementos =0
}


//  MOSTRAR LISTA

void mostrarLista(LISTA *list) {
	int i;

	printf("\n Lista:   ");
	for (i = 0; i < (*list).nElementos; i++)

		printf( "| %i ", (*list).vector[i].numero);
		printf( "|");

	printf("\n");


	printf("\n Posicion: ");
	for (i = 0; i < (*list).nElementos; i++)
		printf( " [%i] ", i);
	printf("\n");


}


// INSERTAR EL ELEMENTO EN UNA POSICION DADA

int insertarLista(LISTA *list, ELEMENTO  elem, int posicion){
    int j;

    if( ( (*list).nElementos == MAXLISTA) || (posicion<0) || (posicion>(*list).nElementos) )
        return false;

    for(j =(*list).nElementos; j > posicion; j--)
        (*list).vector[j] = (*list).vector[j-1];
    (*list).vector[posicion] = elem;
    (*list).nElementos = (*list).nElementos+1;

        return true;
}


// INSERTAR EL ELEMENTO AL FINAL

int insertarListaFinal(LISTA *list, ELEMENTO  elem){
    int j;
    int posicion = (*list).nElementos;

    if( ( (*list).nElementos == MAXLISTA) || (posicion<0) ||(posicion > (*list).nElementos))
        return false;

    for(j = (*list).nElementos; j > posicion; j--)
        (*list).vector[j] = elem;
    (*list).vector[posicion] = elem;
    (*list).nElementos = (*list).nElementos+1;

        return true;
}


// BUSQUEDA DE UN ELEMENTO EN LA LISTA

int busquedaSecuencial(LISTA * list, dato datum){
    int i=0;
    while(i < (*list).nElementos){
        if(datum == (*list).vector[i].numero)
            return  i; 				//SI SE ENCUENTRA EL DATO RETORNA SU POSICION
        else
            i++;
    }
    return ERRORLISTAVACIA;
}


// ELIMINAR ELEMENTO EN UNA POSICION DADA

bool eliminarListaPosicion(LISTA *list, int posicion){
    int i;

    if(posicion == ERRORLISTAVACIA)
        return false;

    for(i = posicion; i < (*list).nElementos-1; i++)
        (*list).vector[i] = (*list).vector[i+1];
    (*list).nElementos --;

    return true;

}


// REMOVER EL PRIMER ELEMENTO DE LA LISTA

bool removerPrimeroLista(LISTA *list){
    int i,posicion;
    posicion = 0; //PRIMER ELEMENTO EN LA POSICION [0]

    if(posicion == ERRORLISTAVACIA)
        return false;

    for(i=posicion;i < (*list).nElementos-1;i++)
        (*list).vector[i] = (*list).vector[i+1];
    (*list).nElementos --;

    return true;

}


// REMOVER EL ULTIMO ELEMENTO DE LA LISTA

bool removerUltimoLista(LISTA *list){
    int i,posicion;
    posicion = (*list).nElementos-1; //ULTIMO ELEMENTO EN LA POSICION [nElementos-1]

    if(posicion == ERRORLISTAVACIA)
        return false;

    for(i=posicion;i < (*list).nElementos-1;i++)
        (*list).vector[i] = (*list).vector[i+1];
    (*list).nElementos --;
    return true;

}


// OBTENER EL PRIMER ELEMENTO DE LA LISTA

dato obtenerPrimerElemento(LISTA *list){

    if((*list).nElementos > 0)
        return  (*list).vector[0].numero;
    else
        return ERRORLISTAVACIA;

}


// OBTENER EL ULTIMO ELEMENTO DE LA LISTA

dato obtenerUltimoElemento(LISTA *list){

    if((*list).nElementos > 0)
        return  (*list).vector[(*list).nElementos-1].numero;
    else
        return ERRORLISTAVACIA;

}


// OBTENER EL ELEMENTO EN UNA POSICION DADA

dato obtenerElementoPosicion(LISTA *list,int posicion){
    if( (posicion < (*list).nElementos) && (posicion >= 0) )
        return (*list).vector[posicion].numero;
    else
        return ERRORLISTAVACIA;
}

//============================================================================
// PRINCIPAL

int main()
{
	int i, pos;
	int cantidadLista;
	ELEMENTO  elem;
    LISTA lista;


    int opcion;

	 do{
		 system("cls");


		    printf("\n\n==================================================================");
			printf("\n\n - - - - - - - Menu Principal - - - - - - -");
			printf("\n 1:   Crear Lista ");
			printf("\n 2:   Insertar un elemento en una posicion dada ");
			printf("\n 3:   Insertar un elemento al final");
			printf("\n 4:   Eliminar un elemento en una posicion dada");
			printf("\n 5:   Remover el primer elemento");
			printf("\n 6:   Remover el ultimo elemento");
			printf("\n 7:   Obtener el primer elemento de la Lista");
			printf("\n 8:   Obtener el ultimo elemento de la Lista");
			printf("\n 9:   Obtener un elemento en una posición dada");
			printf("\n 10:  Salir");
			printf("\n\n==================================================================");
			printf("\n\n Ingrese una opcion : " );
			scanf("%d", &opcion);


	 switch(opcion){
		case 1:

		    inicializarLista(&lista);

		    printf("\n Ingrese la cantidad de elementos de la lista : ");
            scanf("%d", &cantidadLista);
            printf("\n Ingrese los elementos de la lista \n");
            for(i=0;i<cantidadLista;i++){
            	printf("\n [%i] : ",i); scanf("%d", &(elem.numero));
                insertarLista(&lista, elem,i);

            }
            printf("\n- - -Lista creada!- - -\n");
            mostrarLista(&lista);
            getch();

		break;
		case 2:
            printf("\n- - - - - - - INSERTAR ELEMENTO EN UNA POSICION DADA - - - - - - - \n ");
            mostrarLista(&lista);

            printf("\n Ingrese la posicion del elemento a insertar : ");scanf("%d",&pos);
            printf("\n Ingrese el elemento a insertar : ");scanf("%d",&(elem.numero));
            insertarLista(&lista, elem,pos);
            printf("\n- - -New list!- - -\n");
    	    mostrarLista(&lista);
    	    getch();

    	break;
		case 3:
            printf("\n- - - - - - - INSERTAR ELEMENTO AL FINAL - - - - - - -\n");
            mostrarLista(&lista);
            printf("\n Ingrese el elemento a insertar : ");scanf("%d",&(elem.numero));
            insertarListaFinal(&lista, elem);
            printf("\n- - -New list!- - -\n");
    	    mostrarLista(&lista);
    	    getch();

    	break;
		case 4:
            printf("\n- - - - - - - ELIMINAR ELEMENTO DE UNA POSICION DADA - - - - - - -\n");
            mostrarLista(&lista);
            printf("\n Ingrese la posicion del elemento a eliminar: ");scanf("%d",&pos);
            eliminarListaPosicion(&lista, pos);
            printf("\n- - -New list!- - -\n");
    	    mostrarLista(&lista);
    	    getch();

    	break;
		case 5:
            printf("\n- - - - - - - REMOVER EL PRIMER ELEMENTO DE LA LISTA - - - - - - -\n");
            mostrarLista(&lista);
            removerPrimeroLista(&lista);
            printf("\n- - -New list!- - -\n");
    	    mostrarLista(&lista);
    	    getch();

        break;
		case 6:
		    printf("\n- - - - - - - REMOVER EL ULTIMO ELEMENTO DE LA LISTA - - - - - - -\n");
		    mostrarLista(&lista);
            removerUltimoLista(&lista);
            printf("\n- - -New list!- - -\n");
    	    mostrarLista(&lista);
    	    getch();

        break;
		case 7:
            printf("\n- - - - - - - OBTENER EL PRIMER ELEMENTO DE LA LISTA - - - - - - -\n");
            mostrarLista(&lista);
		    printf("\n Primer elemento de la lista: %i  \n",obtenerPrimerElemento(&lista));
		    getch();

        break;
		case 8:
            printf("\n- - - - - - - OBTENER EL ULTIMO ELEMENTO DE LA LISTA - - - - - - -\n");
            mostrarLista(&lista);
            printf("\n Último elemento de la lista: %i  \n",obtenerUltimoElemento(&lista));
            getch();

        break;
		case 9:

		    printf("\n- - - - - - - OBTENER ELEMENTO EN UNA POSICION DADA - - - - - - -\n");
		    mostrarLista(&lista);
            printf("\n Ingrese la posicion del elemento a obtener: ");scanf("%d",&pos);
            printf("\n El elemento en la posicion [ %i ] es :",pos);
            printf(" %i ",obtenerElementoPosicion(&lista,pos));
            getch();

        break;
		case 10:
		break;

	 }

	 }while(opcion !=10);

	 getch();

	return 0;

}
