#include "lista test.h"
#include "registroArchivo.h"
#include "animalYNodos.h"
int main()
{
    /*nodoListaTest* lista;
    lista=inicLista();
    nodoListaTest* nn1 = crearNodo(1);
    nodoListaTest* nn2 = crearNodo(2);
    nodoListaTest* nn3 = crearNodo(3);
    lista=agregarEnOrden(lista, nn2);
    lista=agregarEnOrden(lista, nn1);
    lista=agregarEnOrden(lista, nn3);
    recorrerMostrar(lista);
    lista=borrarNodoPorDato(2,lista);
    printf("\n\n");
    recorrerMostrar(lista);*/

    /*registroArchivo aux = devolverRegistro();
    printf("%s", aux.animal);
    printf("\n%d", aux.cant);
    printf("\n%d", aux.habitat);
    printf("\n%d", aux.idEspecie);
    printf("\n%s", aux.especie);*/
    registroArchivo aux [100];
    int validos=0;
    validos=devolverArregloRegistros(aux);
    /*printf("%d", validos);
    printf("%s", aux[14].animal);*/
    celdaEspecie especies [100];
    int validosPiola = llenarArregloEspecies(especies, aux, validos);
    printf("%d\n", validosPiola);

    preorder(especies[0].arbolAnimales);
    preorder(especies[1].arbolAnimales);
    preorder(especies[2].arbolAnimales);
    preorder(especies[3].arbolAnimales);
    preorder(especies[4].arbolAnimales);

    return 0;
}
