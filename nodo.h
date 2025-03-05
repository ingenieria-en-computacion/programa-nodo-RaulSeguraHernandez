#ifndef NODO_H
#define NODO_H

#include <stdbool.h>


typedef int DATO;
typedef struct NODO{
    DATO d;
    struct NODO *referencia;
}Nodo;

Nodo* CrearNodo();
bool BorrarNodo(Nodo*);
Nodo* AsignarDato(Nodo*,DATO);
DATO ObtenerDato(Nodo*);
Nodo* AsignarRef(Nodo*,Nodo*);
Nodo* ObtenerReferencia(Nodo*);
void ImprimirNodo(Nodo*);

#endif