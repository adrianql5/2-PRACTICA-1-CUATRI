// Copyright (c) 2025 Adrián Quiroga Linares Lectura y referencia permitidas; reutilización y plagio prohibidos

#include <stdio.h>
#include <stdlib.h>

#include "abin.h"
#include "FuncionesExpresion.h"
#include "recorridos.h"

int main(int argc, char ** argv){
    char *mensaje;
    abin arbol;
    
    printf("Introduce la expresión:");

    scanf("%s",mensaje);

    arbol= arbolExpresion(mensaje);


    preorden(arbol);
    printf("\n");
    postorden(arbol);
    destruir(&arbol);
}
