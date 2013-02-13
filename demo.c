#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Genera una matriz de cadenas de texto.
 *
 * :filas int: es el numero de filas a guardar.
 * :columnas int: es la cantidad de caracteres -1 que se podrán guardar.
 */
char ** crear_matriz(int filas, int columnas) {
    int i;
    char ** tmp;

    tmp = (char **) calloc(filas, sizeof(char *));

    for (i=0; i<filas; i++) {
        tmp[i] = (char *) calloc(columnas, sizeof(char));
        tmp[i][0] = '\0';
    }

    return tmp;
}

int main() {
    char ** lines = NULL;

    printf("Creando una matriz sencilla\n");
    lines = crear_matriz(30, 256);
    
    strcpy(lines[0], "Hola!");
    strcpy(lines[1], "(segunda linea)");

    printf("%s\n", lines[0]);
    printf("%s\n", lines[1]);

    return 0;
}
