#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

Nodo* CrearNodo(){
    Nodo *n = (Nodo*)malloc(sizeof(Nodo));
    if (n==NULL){
        printf("no hay espaco para crear el nodo\n");
        return NULL;
    }

    n->referencia = NULL;
    n->d =0;
    return n;
}


bool BorrarNodo(Nodo* n){
    if(n->referencia!=NULL){
        return false;
    }
    n->d=0;
    n->referencia;
    free(n);
    n=NULL;
    return true;
}

Nodo* AsignarDato(Nodo* n ,DATO dat){
    if (n==NULL){
        printf("no existe dicho nodo\n");
        return NULL;
    }
    n->d=dat;
    return n;
}

DATO ObtenerDato(Nodo* n){

    return n->d;
}

Nodo* AsignarRef(Nodo* n1,Nodo*n2){
    if (n1==NULL){
        printf("no existe el nodo origen\n");
        return NULL;
    }
    if (n2==NULL){
        printf("no existe el nodo referenciado\n");
        return NULL;
    }
    n1->referencia=n2;
    return n1;
}

Nodo* ObtenerReferencia(Nodo* n){

    if (n==NULL){
        printf("no existe el nodo origen\n");
        return NULL;
    }
    if (n->referencia==NULL){
        printf("el nodo no apunta a nada\n");
        return NULL;
    }
    return n->referencia;
}

void ImprimirNodo(Nodo* n){
    printf("Direccion %p\n", n);
    printf("Dato: %d\n", n->d);
    printf("Referencia %p\n", n->referencia);
}
