#include <stdio.h> // Ajuste de compilação: inclui funções printf/puts
#include <string.h> // Ajuste de compilação: inclusão necessária para usar 'strcmp'
#include "calculadoraBasica.h"
#include "../operacoes_basicas/operacao_Basica.h"

void Menu_Calculadora_Basica(){
    // Implement the menu logic for the basic calculator here
     char opcao_menu[99];
     do{
        puts("=============================");
        printf("Menu: Calculadora Basica\n");
        puts("=============================");
        puts("1- adicao");
        puts("2- subtracao");
        puts("3- multiplicacao");
        puts("4- divisao");
        puts("0- Voltar");
        puts("------------------------------");
        printf("Escolha uma opcao: ");
        //while (getchar() != '\n'); /* Limpa o buffer do teclado */
        //scanf(" %c", &opcao_menu);
        if(fgets(opcao_menu, sizeof(opcao_menu), stdin) != NULL) { // Ajuste de compilação: usa fgets para ler a entrada do usuário
            opcao_menu[strcspn(opcao_menu, "\n")] = '\0'; // Remove o caractere de nova linha da entrada
             printf("DEBUG: entrada recebida: [%s]\n", opcao_menu);

            puts("------------------------------");
            if(strcmp(opcao_menu, "1") == 0 || strcmp(opcao_menu, "2") == 0 || strcmp(opcao_menu, "3") == 0 || strcmp(opcao_menu, "4") == 0 || strcmp(opcao_menu, "0") == 0){
                // Valid option, proceed to the corresponding operation
                    switch (opcao_menu[0]) {
                        case '1':{
                            // Handle addition
                            printf("Opcao 1 selecionada: Adicao\n");
                            puts("-------------------------------");
                            double a,b;
                            printf("Digite o primeiro numero: ");
                            scanf("%lf",&a);
                            printf("Digite o segundo numero: ");
                            scanf("%lf",&b);
                            while (getchar() != '\n'); // Limpar o buffer do teclado
                            double resultado = adicao(a,b);
                            printf("Resultado: %.15g\n", resultado);// Print the result using %g for better formatting aceita até 15 dígitos significativos    
                            puts("-------------------------------");
                            break;
                        }
                        case '2':{
                            // Handle subtraction
                            printf("Opcao 2 selecionada: Subtracao\n");
                            puts("-------------------------------");
                            double a,b;
                            printf("Digite o primeiro numero: ");
                            scanf("%lf",&a);
                            printf("Digite o segundo numero: ");
                            scanf("%lf",&b);
                            while (getchar() != '\n'); // Limpar o buffer do teclado
                            double resultado = subtracao(a,b);
                            printf("Resultado: %.15g\n", resultado);
                            puts("-------------------------------");
                            break;
                        }
                        case '3':{
                            // Handle multiplication
                            printf("Opcao 3 selecionada: Multiplicacao\n");
                            puts("-------------------------------");
                            double a,b;
                            printf("Digite o primeiro numero: ");
                            scanf("%lf",&a);
                            printf("Digite o segundo numero: ");
                            scanf("%lf",&b);
                            while (getchar() != '\n'); // Limpar o buffer do teclado
                            double resultado = multiplicacao(a,b);
                            printf("Resultado: %.15g\n", resultado);
                            puts("-------------------------------");
                            break;
                        }
                        case '4':{
                            // Handle division
                            printf("Opcao 4 selecionada: Divisao\n");
                            puts("-------------------------------");
                            double a,b;
                            
                            printf("Digite o primeiro numero: ");
                            scanf("%lf",&a);
                            printf("Digite o segundo numero: ");
                            scanf("%lf",&b);
                            while (getchar() != '\n'); // Limpar o buffer do teclado
                            if(b == 0) {
                                printf("Erro: Divisao por zero nao e permitida.\n");
                                puts("-------------------------------");
                                break;
                            }
                            double resultado = divisao(a,b);
                            printf("Resultado: %.15g\n", resultado);
                            puts("-------------------------------");
                            break;
                        }
                        case '0':
                            // Handle return to previous menu
                            printf("Voltando ao menu Principal...\n");
                            puts("-------------------------------");
                            break; 
                        default:
                            puts("Opcao invalida!");
                    }

            } else {
                puts("Opcao invalida!");
                printf("Escolha uma opcao valida (1, 2, 3, 4 ou 0)\n");
            }   
    }else{
        puts("Erro ao ler a entrada do usuario.");
        printf("Escolha uma opcao valida (1, 2, 3, 4 ou 0)\n");
        return;
    }
}while (strcmp(opcao_menu, "0") !=0);


}