#include <stdio.h>
#include "hash.h"

int main() {
    char * tablaHashing[TAM]; //para insertar cada uno de los nombres es mi tabla

    inicializarTabla(tablaHashing);

    char * nombres[]={
            "juan",
            "pedro",
            "Juan",
            "JUAN",
            "agustin",
            "constanza",
            "julian",
            "franco",
            "jazmin",
            "pedro"
    };

    int cantidadNombres = sizeof (nombres) /sizeof (char *);

    for (int i = 0; i < cantidadNombres; i++){
        printf("Nombre: %s\t Hash: %d\n",nombres[i],hashing(nombres[i]));
        insertar(nombres[i],tablaHashing);
    }
    printf("\n\n");

    imprimir(tablaHashing);

    //buscar un nombre en la tabla
    int n = buscar("pedro",tablaHashing);
    if (n != -1){
        printf("El nombre se encontro en la posicion: %d\n", n);
    }else{
        printf("No se encontro el nombre a buscar\n");
    }

    //eliminar un nombre de la tabla
    eliminar("pedro",tablaHashing);
    printf("\nTabla despues de haber eliminado:\n");
    imprimir(tablaHashing);


    return 0;
}
