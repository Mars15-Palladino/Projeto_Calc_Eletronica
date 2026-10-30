#include <stdio.h>
#include <stdbool.h> // Ajuste de compilação: inclusão necessária para usar 'true'
#include <string.h> // Ajuste de compilação: inclusão necessária para usar 'strcmp'
#include "submenus/calculadoraBasica.h"
#include "submenus/calculadoraEletronica.h"

int main(){
    while (true) { // Ajuste de compilação: loop com 'true' agora válido
        printf("=============================\n");
        printf("Menu: Calculadora Eletronica\n");
        printf("=============================\n");
        printf("1- Calculadora Basica\n");
        printf("2- Calculadora Eletronica\n");
        printf("------------------------------\n");

        char opcao_menu[100]; // Ajuste de compilação: array de char para armazenar a entrada do usuário
        printf("Escolha uma opcao: ");
        //scanf(" %c", &opcao_menu);// Ajuste de compilação: espaço antes de %c para ignorar espaços em branco o  %c, limpado o buffer'
        
         if(fgets(opcao_menu, sizeof(opcao_menu), stdin)!=NULL){ // Ajuste de compilação: usa fgets para ler a entrada do usuário
            opcao_menu[strcspn(opcao_menu, "\n")] = '\0'; // Remove o caractere de nova linha da entrada
            printf("DEBUG: entrada recebida: [%s]\n", opcao_menu);
            puts("------------------------------");

            if(strcmp(opcao_menu, "1") == 0 || strcmp(opcao_menu, "2") == 0){
                    // Valid option, proceed to the corresponding submenu
                switch (opcao_menu[0]) {
                case '1':
                    //puts("Debug opcao 1");
                    Menu_Calculadora_Basica(); // Ajuste de compilação: chamada da função sem 'void' antes
                    break;
                case '2':
                    //puts("Debug opcao 2");
                    Menu_Calculadora_Eletronica(); // Ajuste de compilação: chamada da função sem 'void' antes
                    break;
                default:
                    puts("Opcao invalida");
                    break;
                }
            }
            else{
                puts("Opcao invalida");
                printf("Escolha uma opcao valida (1 ou 2)\n");
            }

            //while (getchar() != '\n'); /* Limpa o buffer do teclado */
            //getchar(); Cria uma espécie de bug que faz com que o programa não funcione corretamente, pois o buffer do teclado não é limpo, e a próxima leitura de entrada pode ser afetada por caracteres residuais no buffer. A linha while (getchar() != '\n'); é uma forma de limpar o buffer do teclado, descartando todos os caracteres até encontrar uma nova linha. Isso garante que a próxima leitura de entrada seja feita corretamente, sem interferência de entradas anteriores.
        }
    }

    return 0;
}