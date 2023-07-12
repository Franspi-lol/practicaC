#include "animalYNodos.h"

nodoArbol* inicArbol()
{
    return NULL;
}

nodoArbol* crearNodoArbol(animal dato)
{
    nodoArbol* aux = (nodoArbol*) malloc (sizeof(nodoArbol));
    aux->dato= dato;
    aux->der=NULL;
    aux->izq=NULL;
    return aux;
}

nodoArbol* insertar(nodoArbol* arbol, nodoArbol* nuevo)
{
    if(arbol==NULL)
    {
        arbol=nuevo;
    }
    else
    {
        if (nuevo->dato.cantidad>arbol->dato.cantidad)
        {
            arbol->der=insertar(arbol->der,nuevo);
        }
        else
        {
            arbol->izq=insertar(arbol->izq,nuevo);
        }
    }
    return arbol;

}


int llenarArregloEspecies(celdaEspecie arreglo[], registroArchivo arregloArchi[], int validosArchi)
{
    int validos=0;
    animal animales;
    int pos=0;
    for (int contador=0;contador<validosArchi;contador++)
    {
         animales = crearNuevoAnimal(arregloArchi[contador].animal,arregloArchi[contador].cant, arregloArchi[contador].habitat);
        pos=verificarSiEstaidEspecie(validos,arreglo,arregloArchi[contador].idEspecie);
        if(pos==validos)
        {
            arreglo[pos].arbolAnimales=inicArbol();
            arreglo[pos].idEspecie=arregloArchi[contador].idEspecie;
            strcpy(arreglo[pos].especie,arregloArchi[contador].especie);

            arreglo[pos].arbolAnimales=insertar(arreglo[pos].arbolAnimales, crearNodoArbol(animales));
            validos++;
        }
        else
        {
            arreglo[pos].arbolAnimales=insertar(arreglo[pos].arbolAnimales, crearNodoArbol(animales));
        }
        //contador++;
    }
    return validos;

}


int verificarSiEstaidEspecie(int validos,celdaEspecie arreglo[], int idAbuscar)
{
    int pos=0;
    if(validos==0)
    {
        pos=0;
    }
    else
    {
        for(int i=0;i<validos;i++)
        {
            if(idAbuscar==arreglo[i].idEspecie)
            {
                pos=i;
            }
        }
        if(pos==0)
        {
            pos=validos;
        }
    }
    return pos;
}

animal crearNuevoAnimal(char nombreAnimal[], int cantidad, int habitat)
{
    animal aux;
    aux.cantidad=cantidad;
    aux.habitat=habitat;
    strcpy(aux.nombreAnimal,nombreAnimal);
    return aux;
}

void preorder(nodoArbol* arbol)
{
    if(arbol!=NULL)
    {
        printf("%s\n", arbol->dato.nombreAnimal);
    preorder(arbol->izq);
    preorder(arbol->der);

    }

}
