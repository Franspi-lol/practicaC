#ifndef REGISTROARCHIVO_H_INCLUDED
#define REGISTROARCHIVO_H_INCLUDED
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
typedef struct
{
    char animal [30];
    int cant;
    int habitat;
    int idEspecie;
    char especie[20];
}registroArchivo;
registroArchivo devolverRegistro ();

#endif // REGISTROARCHIVO_H_INCLUDED
