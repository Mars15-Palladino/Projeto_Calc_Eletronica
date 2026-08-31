# Modelo de Processo Cascata — Calc Eletrônica

## 1. Objetivo
Este documento apresenta como o projeto Calc Eletrônica seria desenvolvido caso fosse utilizado o Modelo de Processo Cascata.

Descrever como o projeto Calc Eletrônica seria desenvolvido utilizando o Modelo de Processo em Cascata, primeiro seria definido todos os requisitos
antes dde iniciar a implementação, e depois seguir as etapas necessárias de forma sequencial, até estar completo, tendo suas regras definidas no início,assim dificultando mudanças no meio do projeto, aumentando custos.

## Como funciona o Cascata

### Sequência

REQUISITOS
    ↓
ANÁLISE / PLANEJAMENTO
    ↓
PROJETO
    ↓
IMPLEMENTAÇÃO
    ↓
TESTES
    ↓
ENTREGA
    ↓
MANUTENÇÃO

A ideia principal é que uma etapa só inicia quando a etapa anterior é concluída o desenvolvimento.

# Ordem de Acontecimentos
 1. Requisitos: Definidos antes de começar a programar
 2. Planejamento e projeto: Como o sistema será construído.

    Por exemplo:
                Menu principal
                │
                ├── Operações básicas
                │
                └── Eletrônica
                        ├── Lei de Ohm
                        ├── Potência
                        ├── Resistores
                        └── Código de cores
    Também decidiria a estrutura dos arquivos .c e .h, organização das funções etc.

 3. Implementação: Momento em que começo a escrever o código, aqui entra o desenvolvimento propriamente dito:
                                    main.c
                                    menu.c
                                    menu.h
                                    operacoes.c
                                    operacoes.h
                                    eletronica.c
                                    eletronica.h
                                    ...
 4. Testes: Fase em que verificamos se aquilo que foi desenvolvido corresponde aos requisitos definidos incialmente.

    Por exemplo: RF03 — Fazer as quatro operações básicas.

    Então seriam feitos testes nas funções do programa
                                                        * 10 + 5 = 15
                                                        * 10 - 5 = 5
                                                        * 10 × 5 = 50
                                                        * 10 ÷ 5 = 2
    E verifico se tudo funciona.

 5. Entrega: Depois da fase de testes e correções, teriamos a versão final do programa desenvolvido

 6. Mudanças nos requisitos: Seriam altamente complicadas, pois estariam sujeitas a fazerem alterações no código, o que poderia causar atrasos e reorganizações em partes do programa ao se adicionar ou remover funções no programa. 
    

