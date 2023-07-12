#include "lista test.h"



nodoListaTest* inicLista()
{
    return NULL;
}

nodoListaTest* crearNodo(int dato)
{
    nodoListaTest* aux= (nodoListaTest*)malloc (sizeof(nodoListaTest));
    aux->dato=dato;
    aux->sig=NULL;
    return aux;

}

nodoListaTest* agregarPpio(nodoListaTest* lista, nodoListaTest* nn)
{
    if(lista==NULL)
    {
        lista=nn;
    }
    else
    {
        nn->sig=lista;
        lista=nn;
    }
    return lista;
}

void recorrerMostrar(nodoListaTest* lista)
{
    nodoListaTest* seguidora=lista;
    while(seguidora!=NULL)
    {
        mostrarDato(seguidora);
        seguidora=seguidora->sig;
    }
}

void mostrarDato(nodoListaTest* nodo)
{
    printf("%d", nodo->dato);
    printf("\n");
}

nodoListaTest* borrarNodoPorDato (int dato, nodoListaTest* lista)
{
    nodoListaTest*aux;
    nodoListaTest*ante;
    if(lista!=NULL && lista->dato==dato)
    {
        aux=lista;
        lista=lista->sig;
        free(aux);
    }
    else
    {
        aux=lista;
        while((aux!=NULL)&&(aux->dato!=dato))
        {
            ante=aux;
            aux=aux->sig;
        }
        if(aux!=NULL)
        {
            ante->sig=aux->sig;
            free(aux);
        }
    }
    return lista;
}

nodoListaTest* agregarEnOrden(nodoListaTest* lista, nodoListaTest* nn)
{
    if ( lista==NULL)
    {
        lista=nn;
    }
    else
    {
        if (nn->dato<lista->dato)
        {
            lista=agregarPpio(lista,nn);
        }
        else
        {
            nodoListaTest* ante=lista;
            nodoListaTest* aux= lista;
            while((aux!=NULL) && (nn->dato>lista->dato))
            {
                ante=aux;
                aux=aux->sig;

            }
            ante->sig=nn;
            nn->sig=aux;
        }
    }
    return lista;

}

