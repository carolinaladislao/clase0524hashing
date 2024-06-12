//
// Created by Carol on 30/5/2024.
//

#ifndef CLASE2405HASHING_HASH_H
#define CLASE2405HASHING_HASH_H

#define TAM 18 //cant d clases

int hashing (const char * nombre);

void inicializarTabla(char * tabla[]);

void insertar(char * nombre, char * tabla[]);

void imprimir (char * tabla[]);

int buscar(char * nombre, char * tabla[]);

void eliminar(char * nombre, char * tabla[]);








#endif //CLASE2405HASHING_HASH_H
