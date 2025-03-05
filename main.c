#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

int main(){

    Nodo* n1 = CrearNodo();
    Nodo* n2 = CrearNodo();
    Nodo* n3 = CrearNodo();

    printf("n3\n");
    ImprimirNodo(n3);
    printf("n1\n");
    ImprimirNodo(n1);
    AsignarDato(n1,10);
    AsignarRef(n1,n2);
    printf("dato n1 %d \n",ObtenerDato(n1));
    printf("referencia n2 %p \n",ObtenerReferencia(n2));
    printf("\n n1\n");
    ImprimirNodo(n1);
    AsignarRef(n2,n3);
    printf("n3 antes de borrar\n");
    ImprimirNodo(n3);
    BorrarNodo(n3);
    printf("n2 antes de borrar\n");
    ImprimirNodo(n2);
    BorrarNodo(n2);

    printf("\n n2\n");
    ImprimirNodo(n2);

    printf("\n n3\n");
    ImprimirNodo(n3);

    /*después de imprimir el nodo borrado se observa que se llena de basura la dirección que antes era n3*/
    return 1;
}