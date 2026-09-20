# Documento de Testes — Calc Eletrônica

1. Objetivo

Esse é documento responsável pelos testes do programa, nele terá as previsões do que podem e não pode e não pode acontecer no programa, testes pré implementação e pós implementação do Calc Eletrônica.

Nele serão descritos os comportamentos esperados do programa, incluindo situações que devem ocorrer e situações que não devem ocorrer durante sua utilização.

Os testes serão planejados antes da implementação das funcionalidades e executados após a implementação, permitindo verificar se o programa desenvolvido corresponde aos requisitos e aos resultados esperados.

2. Planejamento dos testes

Os testes serão definidos com base nos requisitos do projeto e nas funcionalidades planejadas para cada incremento.

Para cada funcionalidade serão consideradas:

entradas válidas;
entradas inválidas;
resultados esperados;
comportamentos que não devem ocorrer;
situações de erro;
limites ou condições específicas da operação.

3. Testes pré-implementação

Antes da implementação do código, serão definidos os casos de teste e seus respectivos resultados esperados.

Essa etapa servirá para determinar previamente o que deverá ser verificado quando a funcionalidade for implementada.

Os testes pré-implementação não consistem na execução do código, mas no planejamento das situações que deverão ser posteriormente verificadas.

4. Testes pós-implementação

Após a implementação de cada funcionalidade, os testes planejados serão executados para verificar o comportamento real do programa.

Os resultados obtidos serão comparados com os resultados esperados definidos anteriormente.

Caso seja identificado algum comportamento incorreto, será realizada a correção necessária e o teste deverá ser executado novamente.

5. Casos de teste

Cada caso de teste deverá apresentar, quando aplicável:

Identificação do teste;
Funcionalidade testada;
Entrada utilizada;
Resultado esperado;
Resultado obtido;
Situação do teste;
Observações.
6. Critérios de aprovação

Um teste será considerado aprovado quando o comportamento apresentado pelo programa corresponder ao resultado esperado e atender aos requisitos definidos para a funcionalidade.

Caso o resultado obtido seja diferente do esperado, o teste será considerado reprovado e a causa deverá ser analisada para posterior correção.


# Comportamentos Esperados pré-implementação
Nesta etapa serão definidos os comportamentos esperados para cada funcionalidade, antes da implmentação do código, os comportamentos aqui apresentados, serão usados como referêcia para os testes que serão realizados posteriormente.

## Operações Básicas

* Adição: 
            |O programa deverá 
                            | Receber no minimo dois valores informados pelo usuário;
                            | Realizar a soma dos valores;
                            | Apresetar o resultado correto;
                            | apresentar os valores utilizados no cálculo;
                            | Apresentar explicação da operação feita;
            |Não deverá:

                            |apresentar resultado incorreto;
                            |aceitar uma entrada inválida sem realizar o tratamento adequado.
* subtração:
            | O programa deverá
                                |receber no minimo dois valores informados pelo usuário;
                                |realizar a subtração dos valores, seguindo a ordem em que foram informados(Esquerda para a direita);
                                |apresentar o resultado correto.
                                |apresentar os valores utilizados no cálculo;
                                |Apresentar explicação da operação feita;
            |Não deverá
                                |apresentar resultado incorreto;
                                |apresentar comportamento inesperado diante de entradas inválidas.

* multtiplicação: 
                |O programa deverá:
                                    | Receber no minimo dois valores informados pelo usuário;
                                    | Realizar a Multiplicação dos valores;
                                    | Apresentar o resultado correto;
                                    | apresentar os valores utilizados no cálculo;
                                    | Apresentar a explicação do cálculo
                
                | Não deverá:
                                    |Apresentar resultado incorreto
                                    |Apresentar comportamento inesperado diante de entradas inválidas.


* Divisão: 
            | O programa deverá
                                |Receber no mínimo dois valores informados pelo usuário;
                                |Realizar a divisão dos valores, seguindo a ordem em que foram informados(Esquerda para a direita);
                                |Apresentar o resultado correto;
                                |Apresentar os valores utilizados no cálculo;
                                |Apresentar a explicação da operação feita;

           
            | Não deverá:
                                |Apresentar resultado incorreto;
                                |Permitir divisão por zero;
                                |Apresentar comportamento inesperado diante de entradas inválidas.


## Operações Eletrônica


* Lei de ohm
    * calcular tensão: 
                        |Receber valores de I = corrente e R = resistência
                        |Os valores deverão ser mutlplicados
                        |Apresentar o resultado correto;
                        |Apresentar os valores utilizados no cálculo;
                        |Apresentar explicação da operação feita

    * Cálculo de corrente
                            |Receber os valores de V = tensão e R = resistência;
                            |Realizar a divisão de V por R;
                            |Apresentar o resultado correto;
                            |Apresentar os valores utilizados no cálculo;
                            |Apresentar a explicação da operação feita;
                            
   
    * Cálculo de resistência
                            |Receber os valores de V = tensão e I = corrente;
                            |Realizar a divisão de V por I;
                            |Apresentar o resultado correto;
                            |Apresentar os valores utilizados no cálculo;
                            |Apresentar a explicação da operação feita;
                            

Não deverá:
            |Apresentar resultado incorreto;
            |Apresentar comportamento inesperado diante de entradas inválidas.
            |Permitir divisão por zero nos cálculos de resistência e Corrente;
