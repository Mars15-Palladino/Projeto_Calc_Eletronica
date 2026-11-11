#include <stdio.h>
#include <string.h>
#include "menuPotencia_eletrica.h"
#include "../../operacoes_eletronicas/operacao_Eletronica.h"
#include "../../func_utilitarias/utilitarias.h"

void menu_Potencia_Eletrica() {
    limpar_terminal(); // Limpa o terminal antes de exibir o menu
    puts("-------------------------------");
    printf("Escolha como deseja calcular a potencia:\n");
    puts("-------------------------------");
    printf("1 - Calcular usando Tensão e Corrente (P = V * I)\n");
    printf("2 - Calcular usando resistencia e corrente (P = I^2 * R)\n");
    printf("3 - Calcular usando tensão e resistencia (P = V^2 / R)\n");
    printf("0 - Voltar\n");
    puts("-------------------------------");
    

    char opcao[99];
    if (fgets(opcao, sizeof(opcao), stdin) != NULL) {
         opcao[strcspn(opcao, "\n")] = '\0';

        if(strcmp(opcao, "1") == 0 || strcmp(opcao, "2") == 0 || strcmp(opcao, "3") == 0 || strcmp(opcao, "0") == 0) {

            switch(opcao[0]){
               case '1':{
                    printf("Opcao 1 selecionada: Calcular usando Tensão e Corrente (P = V * I)\n");
                    puts("-------------------------------");
                    double tensao, corrente;
                    printf("Digite a tensão (em volts): ");
                    scanf("%lf", &tensao);
                    printf("Digite a corrente (em amperes): ");
                    scanf("%lf", &corrente);
                    while (getchar() != '\n'); // Limpar o buffer do teclado
                    double resultado_potencia = potencia_tensao_corrente(tensao, corrente);
                    printf("Resultado: %.15g W\n", resultado_potencia);
                    pausar_terminal(); // Pausa o terminal após a execução da operação
                    break;
                }
                case '2':{
                    printf("Opcao 2 selecionada: Calcular usando resistencia e corrente (P = I^2 * R)\n");
                    puts("-------------------------------");
                    double corrente, resistencia;
                    printf("Digite a corrente (em amperes): ");
                    scanf("%lf", &corrente);
                    printf("Digite a resistencia (em ohms): ");
                    scanf("%lf", &resistencia);
                    while (getchar() != '\n'); // Limpar o buffer do teclado
                    double resultado_potencia = potencia_corrente_resistencia(corrente, resistencia);
                    printf("Resultado: %.15g W\n", resultado_potencia);
                    pausar_terminal(); // Pausa o terminal após a execução da operação
                    break;
                }
                case '3':{
                    printf("Opcao 3 selecionada: Calcular usando tensão e resistencia (P = V^2 / R)\n");
                    puts("-------------------------------");
                    double tensao, resistencia;
                    printf("Digite a tensão (em volts): ");
                    scanf("%lf", &tensao);
                    printf("Digite a resistencia (em ohms): ");
                    scanf("%lf", &resistencia);
                    while (getchar() != '\n'); // Limpar o buffer do teclado
                    double resultado_potencia = potencia__tensao_resistencia(tensao, resistencia);
                    printf("Resultado: %.15g W\n", resultado_potencia);
                    pausar_terminal(); // Pausa o terminal após a execução da operação
                    break;
                }
                case '0':
                   printf("Voltando ao menu anterior...\n");
                   limpar_terminal(); // Limpa o terminal ao voltar
                   break;
            }
        }else {
            puts("Opcao invalida!");
            printf("Escolha uma opcao valida (1, 2, 3 ou 0)\n");
            pausar_terminal(); // Pausa o terminal após uma entrada inválida
        }
    }      
}

