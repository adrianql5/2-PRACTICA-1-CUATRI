// Copyright (c) 2025 Adrián Quiroga Linares Lectura y referencia permitidas; reutilización y plagio prohibidos

#ifndef JUEGODETRONOS
#define JUEGODETRONOS
#include "lista.h"
#include "abb.h"

/**
 * Añade un personaje al arbol
 *
 * @param arbol puntero al arbol a modificar
 */
void anhadirPersonaje(TABB *arbol);

/**
 * Imprime por pantalla el listado de personajes del arbol
 *
 * @param arbol del cual leer la informacion
 */
void listadoPersonajes(TABB arbol);

/**
 * Elimina a un personaje del arbol
 *
 * @param arbol puntero al arbol a modificar
 */
void eliminarPersonaje(TABB *arbol);

/**
 * Carga los datos de un archivo en el arbol
 *
 * @param arbol puntero al arbol que se moficará
 * @param argc numero de argumentos que se pasan por linea de comandos
 * @param argv puntero a la lista de argumentos que se pasan por linea de comandos
 */
void cargarArchivo(TABB * arbol, int argc, char ** argv);

/**
 * Imprime en el archivo el listado de personajes del arbol
 *
 * @param arbol del cual leer la información
 * @param archivo puntero al archivo donde se escribiran los datos
 */
void listadoPersonajesArchivo(TABB arbol, FILE * archivo);

/**
 * Función que busca a los asesinos de un personaje
 *
 * @param arbol del cual leer la informacion
 */
void buscarAsesinos(TABB arbol);

/**
 * Funcion que busca a los hijos de un personaje
 *
 * @param arbol del cual leer la informacion
 */
void buscarHijos(TABB arbol);

/**
 * Funcion que imprime a los killers del arbol
 *
 * @param arbol del cual leer la informacion
 */
void buscarKiller(TABB arbol);

/**
 * Funcion que modifica a un personaje del arbol
 *
 * @param arbol puntero al arbol a modificar
 */
void modificarPersonaje(TABB* arbol);

#endif //JUEGODETRONOS
