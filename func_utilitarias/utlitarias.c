#include "utilitarias.h"
#include <stdlib.h>
#include <stdio.h>

void limpar_terminal(void){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void pausar_terminal(void){
    puts("-------------------------------");
    puts("Pressione Enter para continuar...");
    while (getchar() != '\n'); // Limpa o buffer do teclado

    limpar_terminal(); // Limpa o terminal após a pausa
}