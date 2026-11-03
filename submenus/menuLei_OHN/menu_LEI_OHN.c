#include <stdio.h>
#include <string.h>
#include "menu_LEI_OHN.h"
#include "../../operacoes_eletronicas/operacao_Eletronica.h"

void menu_LEI_OHN(void) {
    puts("-------------------------------");
    printf("Escolha a grandeza que deseja calcular:\n");
    puts("-------------------------------");
    printf("1 - Tensao (V)\n");
    printf("2 - Corrente (A)\n");
    printf("3 - Resistencia (Ohm)\n");
    printf("0 - Voltar\n");
    puts("-------------------------------");

    char opcao[99];
    if (fgets(opcao, sizeof(opcao), stdin) != NULL) {
        opcao[strcspn(opcao, "\n")] = '\0';

        if(strcmp(opcao, "1") == 0 || strcmp(opcao, "2") == 0 || strcmp(opcao, "3") == 0 || strcmp(opcao, "0") == 0) {

            switch (opcao[0]) {
                case '1':{
                    printf("Opcao 1 selecionada: Tensao (V)\n");
                    puts("-------------------------------");
                    double corrente, resistencia;
                    printf("Digite a corrente (em amperes): ");
                    scanf("%lf",&corrente);
                    printf("Digite a resistencia (em ohms): ");
                    scanf("%lf",&resistencia);
                    while (getchar() != '\n'); // Limpar o buffer do teclado
                    double resultado_tensao = tensao(corrente, resistencia);
                    printf("Resultado: %.15g V\n", resultado_tensao);
                    break;
                }
                case '2':{
                    printf("Opcao 2 selecionada: Corrente (A)\n");
                    puts("-------------------------------");
                    double tensao, resistencia;
                    printf("Digite a tensao (em volts): ");
                    scanf("%lf",&tensao);
                    printf("Digite a resistencia (em ohms): ");
                    scanf("%lf",&resistencia);
                    while (getchar() != '\n'); // Limpar o buffer do teclado
                    double resultado_corrente = corrente(tensao, resistencia);
                    printf("Resultado: %.15g A\n", resultado_corrente);
                    break;
                }
                case '3':{
                    printf("Opcao 3 selecionada: Resistencia (Ohm)\n");
                    puts("-------------------------------");
                    double tensao, corrente;
                    printf("Digite a tensao (em volts): ");
                    scanf("%lf",&tensao);
                    printf("Digite a corrente (em amperes): ");
                    scanf("%lf",&corrente);
                    while (getchar() != '\n'); // Limpar o buffer do teclado
                    double resultado_resistencia = resistencia(tensao, corrente);
                    printf("Resultado: %.15g Ohm\n", resultado_resistencia);
                    break;
                }
                case '0':
                    printf("Voltando ao menu anterior...\n");
                    break;
                default:
                    puts("Opcao invalida!");
                    break;
            }
            // Process the selected option
        } else {
          puts("Erro ao ler a entrada do usuario.");
          printf("Escolha uma opcao valida (1, 2, 3,  ou 0)\n");
        
        }
    }
}