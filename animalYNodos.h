#ifndef ANIMALYNODOS_H_INCLUDED
#define ANIMALYNODOS_H_INCLUDED
#include "registroArchivo.h"
typedef struct
{
    char nombreAnimal[30];
    int cantidad;
    int habitat;///1 - selva, 2- savana, 3-bosque, 4-mar
}animal;

typedef struct
{
    animal dato;
    struct nodoArbol* izq;
    struct nodoArbol* der;
}nodoArbol;

typedef struct
{
    int idEspecie;
    char especie[20];
    nodoArbol* arbolAnimales;
}celdaEspecie;


animal crearNuevoAnimal(char nombreAnimal[], int cantidad, int habitat);
int verificarSiEstaidEspecie(int validos,celdaEspecie arreglo[], int idAbuscar);
int llenarArregloEspecies(celdaEspecie arreglo[], registroArchivo arregloArchi[], int validosArchi);
nodoArbol* insertar(nodoArbol* arbol, nodoArbol* nuevo);
nodoArbol* crearNodoArbol(animal dato);
nodoArbol* inicArbol();
#endif // ANIMALYNODOS_H_INCLUDED
