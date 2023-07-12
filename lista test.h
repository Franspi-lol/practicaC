#ifndef LISTA_TEST_H_INCLUDED
#define LISTA_TEST_H_INCLUDED
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

typedef struct
{
    int dato;
    struct nodoListaTest* sig;
}nodoListaTest;


nodoListaTest* inicLista();

nodoListaTest* crearNodo(int dato);

nodoListaTest* agregarPpio(nodoListaTest* lista, nodoListaTest* nn);

void recorrerMostrar(nodoListaTest* lista);

void mostrarDato(nodoListaTest* nodo);
nodoListaTest* borrarNodoPorDato (int dato, nodoListaTest* lista);
nodoListaTest* agregarEnOrden(nodoListaTest* lista, nodoListaTest* nn);
#endif // LISTA_TEST_H_INCLUDED
