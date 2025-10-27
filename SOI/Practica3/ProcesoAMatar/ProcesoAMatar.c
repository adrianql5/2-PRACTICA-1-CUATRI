// Copyright (c) 2025 Adrián Quiroga Linares Lectura y referencia permitidas; reutilización y plagio prohibidos

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main(int argc, char *argv[]){
    char c;
    printf("PID: %d", getpid());
    scanf("%c",&c);
    return EXIT_SUCCESS;
}

