
#include <stdio.h>
#include <string.h>
#include "calculadoraEletronica.h"

void Menu_Calculadora_Eletronica() {
   

    char opcao_menu[99];

        do {
            puts("=============================");
            printf("Menu: Calculadora Eletronica\n");
            puts("=============================");
            puts("1 - Lei de Ohm");
            puts("2 - Potencia Eletrica");
            puts("0 - Voltar");
            puts("------------------------------");
            printf("Escolha uma opcao: ");

        if (fgets(opcao_menu, sizeof(opcao_menu), stdin) != NULL) {
            opcao_menu[strcspn(opcao_menu, "\n")] = '\0';

            printf("DEBUG: entrada recebida: [%s]\n", opcao_menu);
            puts("------------------------------");

            if (strcmp(opcao_menu, "1") == 0 ||strcmp(opcao_menu, "2") == 0 || strcmp(opcao_menu, "0") == 0) {

                switch (opcao_menu[0]) {
                    case '1':
                        printf("Opcao 1 selecionada: Lei de Ohm\n");
                        break;

                    case '2':
                        printf("Opcao 2 selecionada: Potencia Eletrica\n");
                        break;

                    case '0':
                        printf("Voltando ao menu Principal...\n");
                        break;

                    default:
                        puts("Opcao invalida!");
                        break;
                }

            } else {
                puts("Opcao invalida!");
                printf("Escolha uma opcao valida (1, 2 ou 0)\n");
            }

        } else {
            puts("Erro ao ler a entrada do usuario.");
            printf("Tente novamente quando a entrada estiver disponivel.\n");
            return;
        }
    } while (strcmp(opcao_menu, "0") != 0);//compara a string inteira strcmp
}