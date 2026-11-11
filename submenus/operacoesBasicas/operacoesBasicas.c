#include <stdio.h>
#include <string.h>
#include "operacoesBasicas.h"
#include "../../operacoes_basicas/operacao_Basica.h"
#include "../../func_utilitarias/utilitarias.h"

void menu_Operacoes_Basicas(void) {
    puts("-------------------------------");
    printf("Escolha a operacao basica:\n");
    puts("-------------------------------");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Porcentagem\n");
    printf("0 - Voltar\n");
    puts("-------------------------------");

    char opcao[99];
    if (fgets(opcao, sizeof(opcao), stdin) != NULL) {
        opcao[strcspn(opcao, "\n")] = '\0';

        if (strcmp(opcao, "1") == 0 ||
            strcmp(opcao, "2") == 0 ||
            strcmp(opcao, "3") == 0 ||
            strcmp(opcao, "4") == 0 ||
            strcmp(opcao, "5") == 0 ||
            strcmp(opcao, "0") == 0) {
            switch (opcao[0]) {
                case '1': {
                    printf("Opcao 1 selecionada: Adicao\n");
                    puts("-------------------------------");
                    double a, b;
                    printf("Digite o primeiro numero: ");
                    scanf("%lf", &a);
                    printf("Digite o segundo numero: ");
                    scanf("%lf", &b);
                    while (getchar() != '\n');
                    double resultado = adicao(a, b);
                    printf("Resultado: %.15g\n", resultado);
                    pausar_terminal(); // Pausa o terminal após a execução da operação
                    break;
                }
                case '2': {
                    printf("Opcao 2 selecionada: Subtracao\n");
                    puts("-------------------------------");
                    double a, b;
                    printf("Digite o primeiro numero: ");
                    scanf("%lf", &a);
                    printf("Digite o segundo numero: ");
                    scanf("%lf", &b);
                    while (getchar() != '\n');
                    double resultado = subtracao(a, b);
                    printf("Resultado: %.15g\n", resultado);
                    pausar_terminal(); // Pausa o terminal após a execução da operação
                    break;
                }
                case '3': {
                    printf("Opcao 3 selecionada: Multiplicacao\n");
                    puts("-------------------------------");
                    double a, b;
                    printf("Digite o primeiro numero: ");
                    scanf("%lf", &a);
                    printf("Digite o segundo numero: ");
                    scanf("%lf", &b);
                    while (getchar() != '\n');
                    double resultado = multiplicacao(a, b);
                    printf("Resultado: %.15g\n", resultado);
                    pausar_terminal(); // Pausa o terminal após a execução da operação
                    break;
                }
                case '4': {
                    printf("Opcao 4 selecionada: Divisao\n");
                    puts("-------------------------------");
                    double a, b;
                    printf("Digite o primeiro numero: ");
                    scanf("%lf", &a);
                    printf("Digite o segundo numero: ");
                    scanf("%lf", &b);
                    while (getchar() != '\n');
                    if (b == 0.0) {
                        printf("Erro: Divisao por zero nao e permitida.\n");
                        break;
                    }
                    double resultado = divisao(a, b);
                    printf("Resultado: %.15g\n", resultado);
                    pausar_terminal(); // Pausa o terminal após a execução da operação
                    break;
                }
                case '5': {
                    printf("Opcao 5 selecionada: Porcentagem\n");
                    puts("-------------------------------");
                    double a, b;
                    printf("Digite o numero: ");
                    scanf("%lf", &a);
                    printf("Digite a porcentagem: ");
                    scanf("%lf", &b);
                    while (getchar() != '\n');
                    double resultado = porcentagem(a, b);
                    printf("Resultado: %.15g\n", resultado);
                    pausar_terminal(); // Pausa o terminal após a execução da operação
                    break;
                }
                case '0':
                    printf("Voltando ao menu anterior...\n");
                    limpar_terminal(); // Limpa o terminal ao voltar
                    break;
            }
        } else {
            puts("Opcao invalida!");
            printf("Escolha uma opcao valida (1, 2, 3, 4, 5 ou 0)\n");
            pausar_terminal(); // Pausa o terminal após uma entrada inválida
        }
    } else {
        puts("Erro ao ler a entrada do usuario.");
        pausar_terminal(); // Pausa o terminal após uma entrada inválida
    }
}
