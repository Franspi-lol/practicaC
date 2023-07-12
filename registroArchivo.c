#include "registroArchivo.h"

registroArchivo devolverRegistro ()
{
    registroArchivo aux;
    FILE * archi = fopen("animales.dat", "rb");
    if(archi!=NULL)
    {
        fread(&aux, sizeof(aux),1,archi);
        fclose(archi);
    }
    return aux;
}

int devolverArregloRegistros(registroArchivo arreglo[])
{
    int validos=0;
    registroArchivo aux;
    FILE * archi = fopen("animales.dat", "rb");
    if(archi!=NULL)
    {
        while(!feof(archi)){


        fread(&aux, sizeof(aux),1,archi);
        arreglo[validos]=aux;
        validos++;
        }

    }
    fclose(archi);
    return validos;
}


