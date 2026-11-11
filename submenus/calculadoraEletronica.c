
#include <stdio.h>
#include <string.h>
#include "calculadoraEletronica.h"
#include "menuLei_OHN/menu_LEI_OHN.h"
#include "menuPotencia_Eletronica/menuPotencia_eletrica.h"
#include "../func_utilitarias/utilitarias.h"


void Menu_Calculadora_Eletronica() {
   limpar_terminal(); // Limpa o terminal antes de exibir o menu

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

            // printf("DEBUG: entrada recebida: [%s]\n", opcao_menu);
            puts("------------------------------");

            if (strcmp(opcao_menu, "1") == 0 ||strcmp(opcao_menu, "2") == 0 || strcmp(opcao_menu, "0") == 0) {

                switch (opcao_menu[0]) {
                    case '1':
                        printf("Opcao 1 selecionada: Lei de Ohm\n");
                        menu_LEI_OHN();
                        break;

                    case '2':{
                        printf("Opcao 2 selecionada: Potencia Eletrica\n");
                        puts("-------------------------------");
                        menu_Potencia_Eletrica();
                        break;
                    }
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
                printf("Escolha uma opcao valida (1, 2 ou 0)\n");
                pausar_terminal(); // Pausa o terminal após uma entrada inválida
            }

        } else {
            puts("Erro ao ler a entrada do usuario.");
            printf("Tente novamente quando a entrada estiver disponivel.\n");
            pausar_terminal(); // Pausa o terminal após uma entrada inválida
            return;
        }
    } while (strcmp(opcao_menu, "0") != 0);//compara a string inteira strcmp
}