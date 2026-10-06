#include <stdio.h>
#include <stdbool.h> // Ajuste de compilação: inclusão necessária para usar 'true'
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

        char opcao_menu;
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao_menu);
        puts("------------------------------");

        switch (opcao_menu) {
        case '1':
            puts("Debug opcao 1");
            Menu_Calculadora_Basica(); // Ajuste de compilação: chamada da função sem 'void' antes
            break;
        case '2':
            puts("Debug opcao 2");
            Menu_Calculadora_Eletronica(); // Ajuste de compilação: chamada da função sem 'void' antes
            break;
        default:
            puts("Opcao invalida");
            break;
        }

        while (getchar() != '\n'); /* Limpa o buffer do teclado */
        getchar();
    }

    return 0;
}