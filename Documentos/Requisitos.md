# Projeto_Calc_Eletronica
Calcula Eletrônica em C


## Objetivo

Desevolver uma calculadora Básica, capaz de fazer tantos as operações básicas, quanto as operações voltados para  a área de eletrônica apresentando ao usuário o resultado e, quando aplicável, o passo a passo utilizado para chegar ao resultado

## Requisistos

### Requisitos Funcionais

RF00 — O sistema deverá apresentar o procedimento utilizado para realizar os cálculos de eletrônica, incluindo as fórmulas utilizadas, os valores fornecidos pelo usuário, a substituição dos valores na fórmula e o resultado final.


RF01 - A apliccação receberá os dados via teclado

RF02 - Deverá permitir escolher a Operação Desejada

RF03 - Deverá fazer as 4 operações Básicas
    .Adição
    .Subtração
    .Multiplicação
    .Divisão

RF04 - Deverá Fazer Operações com números decimais 

RF05 - Deverá Apresentar Resultado da Operação 

RF06 — Deverá informar ao usuário quando ocorrer uma operação inválida, como uma divisão por zero.

RF07 — Lei de Ohm

A calculadora deverá permitir calcular:

Tensão (V)
Corrente (I)
Resistência (R)

RF08 — Potência elétrica

A calculadora deverá permitir calcular:

Potência (P)
Tensão (V)
Corrente (I)
Resistência (R)

RF09 — Resistores em série

Deverá permitir calcular a resistência equivalente de resistores em série.


RF10 — Resistores em paralelo

Deverá permitir calcular a resistência equivalente de resistores em paralelo.

Aqui teremos que definir posteriormente exatamente quais formas de entrada queremos permitir.

RF11 — Código de cores de resistores

Essa seria uma funcionalidade muito interessante para uma calculadora de eletrônica.

O usuário poderia informar as cores das faixas do resistor e o programa retornaria:

Valor da resistência
Multiplicador
Tolerância
Valor mínimo
Valor máximo

E também poderíamos fazer o inverso:

Usuário informa 1 kΩ ±5% → programa apresenta as cores correspondentes.

RF12 — O sistema deverá permitir que o usuário informe valores utilizando unidades e múltiplos apropriados.

RF13 — Estrutura de menus e navegação

O sistema deverá possuir uma estrutura de menus e submenus que permita ao usuário navegar entre as diferentes funcionalidades da calculadora.

O menu principal deverá apresentar, inicialmente, as seguintes categorias:

1. Operações Básicas
2. Eletrônica
3. Conversões
4. Sair

Cada categoria deverá possuir seu próprio submenu com as operações disponíveis.

O sistema deverá permitir que o usuário:

* Selecione uma categoria pelo teclado;
* Selecione uma operação dentro da categoria escolhida;
* Execute a operação desejada;
* Visualize o resultado;
* Retorne ao menu anterior;
* Retorne ao menu principal;
* Encerre o programa através da opção de saída.

A estrutura deverá ser desenvolvida de forma organizada, permitindo a inclusão de novas categorias e funcionalidades futuramente.





### Requisitos não Funcionais

RNF01 - O Programa deverá Funcioar tanto no Windows quanto no linux

RNF02 - Deverá ser Desevolvido em C

RNF03 — Desempenho :As operações deverão apresentar o resultado sem demora perceptível.

RNF04 -Usabilidade: O sistema deverá apresentar instruções claras para o usuário.

RNF05 - O programa deverá mostrar o passo a passo das opeçãoes e explicar

RNF06 — Portabilidade: O programa deverá priorizar recursos padronizados da linguagem C, evitando dependências específicas de um sistema operacional quando não forem necessárias.

RNF07 — Manutenibilidade: O programa deverá possuir uma estrutura organizada, permitindo a inclusão de novos cálculos e funcionalidades posteriormente.


