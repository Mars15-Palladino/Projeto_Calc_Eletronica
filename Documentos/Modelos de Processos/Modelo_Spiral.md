# Modelo de Processo em Spiral — Calc Eletrônica

## 1. Objetivo

Este Documento visa mostrar como o projeto Calc Eletrônica seria desenvolvido caso fosse utilizado o Modelo de Processo em Spiral.

O modelo em spiral funciona no sentido em que o desenvolvimento assume ciclos de desenvolvimento, onde a cada um desses ciclos, decisões são tomadas sobre o desenvolvimento do projeto, possibilitado o refinamento do projeto cada vez mais e sempre levado em consideração a análise de riscos, ode a cada ciclo o cliete partiipa ativamente da validação dos protótipos do projeto e tendo uma capacidade de mudança maior que o do Modelo Cascata.

## Como Funciona o Modelo Spiral 

O desenvolvimento, seria uma serquência de iterações que assume o funcionamento de forma ciclíca desse modelo, com o funcionamento assim. O desenvolvimento seria uma sequência de voltas em torno de planejamento, riscos, desenvolvimentos e avaliações, que se repetiriam.

                 ┌───────────────┐
                 │   CICLO 1     │
                 │ planejamento  │
                 │ riscos        │
                 │ desenvolvimento
                 │ avaliação     │
                 └───────┬───────┘
                         ↓
                 ┌───────────────┐
                 │   CICLO 2     │
                 │ planejamento  │
                 │ riscos        │
                 │ desenvolvimento
                 │ avaliação     │
                 └───────┬───────┘
                         ↓
                 ┌───────────────┐
                 │   CICLO 3     │
                 │ planejamento  │
                 │ riscos        │
                 │ desenvolvimento
                 │ avaliação     │
                 └───────────────┘

Cada volta da espiral representa um ciclo de desenvolvimento.

E cada ciclo serve para pegar o que já existe, analisar, desenvolver ou melhorar alguma coisa e então decidir o que fazer no próximo ciclo.

                        CICLO 1
                        ↓
                        ANALISA RISCOS
                        ↓
                        DESENVOLVE
                        ↓
                        AVALIA
                        ↓
                        CICLO 2
                        ↓
                        ANALISA NOVOS RISCOS
                        ↓
                        DESENVOLVE
                        ↓
                        AVALIA
                        ↓
                        ...

Então o projeto vai sendo refinado conforme avança.

Por que o nome "Espiral"?

Porque você não volta exatamente para o mesmo ponto anterior do projeto.

       CICLO 3
      ╭───────╮
     ╱         ╲
    │   CICLO 2 │
    │  ╭─────╮  │
    │ ╱       ╲ │
    ││ CICLO 1 ││
    │ ╲       ╱ │
    │  ╰─────╯  │
     ╲         ╱
      ╰───────╯

A cada ciclo, o sistema vai ficando mais completo e mais refinado.  


## Uma parte Importante 

O modo spiral tem forte foco na identificação e análise de riscos. Então acontece a seguinte, Que problemas posso encontrar? Como posso reduzir esses riscos? Depois desenvolvo e avalio o resultado."


## Aplicado a Calculadora Eletrôica

Ciclo 1 — Calculadora básica
Objetivo

Criar:

Menu;
Adição;
Subtração;
Multiplicação;
Divisão.
Riscos

Você poderia identificar:

Usuário digitar algo inválido;
Divisão por zero;
Problemas com números decimais;
Organização ruim do código.

Então você desenvolve uma solução para esse ciclo.

Depois testa.

E pergunta:

Funcionou?
O que deu errado?
O que precisa ser melhorado?
Apareceu algum novo requisito?

6. Ciclo 2 — Lei de Ohm

Agora você decide adicionar eletrônica.

Objetivo

Implementar:

Tensão;
Corrente;
Resistência.
Riscos

Por exemplo:

Fórmula implementada incorretamente;
Valores incompatíveis;
Problemas com unidades;
Resultado apresentado de forma confusa.

Então você desenvolve, testa e avalia novamente.

7. Ciclo 3 — Resistores

Agora:

Série;
Paralelo.

E novamente fazemos uma análise:

Quais são os riscos dessa funcionalidade?

Pode haver problemas com:

Quantidade de resistores;
Valores inválidos;
Divisão por zero;
Entrada dos dados;
Precisão dos resultados.

Depois desenvolve → testa → avalia.

8. E os requisitos podem mudar

Essa é outra diferença muito importante.

Imagine que você esteja no ciclo da Lei de Ohm e perceba:

"Seria muito melhor se o usuário pudesse colocar 1 kΩ em vez de 1000 Ω."

No Cascata, isso poderia ser uma mudança problemática porque o projeto já estaria avançado.

No Espiral, a mudança pode ser analisada e incorporada ao planejamento de um próximo ciclo. O material destaca justamente essa maior capacidade de adaptação.

Assim, ocorrendo todo o processo de ciclos que são avaliados pelo cliente permitindo identificar problemas, validar o que foi desenvolvido e planejar o próximo ciclo.

