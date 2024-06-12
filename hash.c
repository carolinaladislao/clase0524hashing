//
// Created by Carol on 30/5/2024.
//

#include <stdio.h>
#include <string.h>
#include "hash.h"

int hashing(const char * nombre) {
    int pos = 0;

    for (int i = 0; nombre[i] != '\0'; i++){
        pos = pos + nombre[i];
    }

    return pos % TAM;
}

void insertar(char *nombre, char * tabla[]) {
    int pos = hashing(nombre);

    while (tabla[pos] != NULL){
        pos = (pos + 1) % TAM; //siempre tiene que haber alguno libre para usarse
    }

    tabla[pos] = nombre;

}

void imprimir(char **tabla) {

    for (int i = 0; i < TAM; i ++){
        printf("Pos: %d \t Nombre: %s\n", i, tabla[i]);
    }

}

void inicializarTabla(char **tabla) {

    for(int i = 0; i < TAM; i++){
        tabla[i] = NULL;
    }

}

void eliminar(char *nombre, char **tabla) {

    int n = buscar(nombre, tabla);

    if(n == -1){
        printf("No se encontro en la tabla a eliminar\n");
    }else{
        tabla[n] = NULL;
    }

}

//buscar devuelve -1 si no encuentra, devuelve la posicion correspondiente si lo encuentra
int buscar(char *nombre, char **tabla) {

    int pos = hashing(nombre);
    int cont = 0;

    while (tabla[pos] != NULL && strcmp (nombre, tabla[pos]) != 0 && cont < TAM){
        pos = (pos + 1) % TAM;
        cont ++;
    }

    if (tabla[pos] != NULL && strcmp(nombre, tabla[pos])==0){
        return  pos;
    }

    return -1;
}



