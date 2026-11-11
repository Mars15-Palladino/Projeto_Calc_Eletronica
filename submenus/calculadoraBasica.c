#include <stdio.h>
#include <string.h>
#include "calculadoraBasica.h"
#include "operacoesBasicas/operacoesBasicas.h"
#include "../func_utilitarias/utilitarias.h"

void Menu_Calculadora_Basica(void) {
    limpar_terminal(); // Limpa o terminal antes de exibir o menu
    char opcao_menu[99];

    do {
        puts("=============================");
        printf("Menu: Calculadora Basica\n");
        puts("=============================");
        puts("1 - Operacoes Basicas");
        puts("0 - Voltar");
        puts("------------------------------");
        printf("Escolha uma opcao: ");

        if (fgets(opcao_menu, sizeof(opcao_menu), stdin) != NULL) {
            opcao_menu[strcspn(opcao_menu, "\n")] = '\0';

            // printf("DEBUG: entrada recebida: [%s]\n", opcao_menu);
            puts("------------------------------");

            if (strcmp(opcao_menu, "1") == 0 || strcmp(opcao_menu, "0") == 0) {
                switch (opcao_menu[0]) {
                    case '1':
                        printf("Opcao 1 selecionada: Operacoes Basicas\n");
                        menu_Operacoes_Basicas();
                        break;

                    case '0':
                        printf("Voltando ao menu Principal...\n");
                        limpar_terminal(); // Limpa o terminal ao voltar
                        break;

                    default:
                        puts("Opcao invalida!");
                        pausar_terminal(); // Pausa o terminal após uma entrada inválida
                        break;
                }
            } else {
                puts("Opcao invalida!");
                printf("Escolha uma opcao valida (1 ou 0)\n");
                pausar_terminal(); // Pausa o terminal após uma entrada inválida
            }
        } else {
            puts("Erro ao ler a entrada do usuario.");
            printf("Tente novamente quando a entrada estiver disponivel.\n");
            pausar_terminal(); // Pausa o terminal após uma entrada inválida
            return;
        }
    } while (strcmp(opcao_menu, "0") != 0);
}
