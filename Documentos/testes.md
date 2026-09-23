# Documento de Testes — Calc Eletrônica

## 1. Objetivo

Esse é documento responsável pelos testes do programa, nele terá as previsões do que podem e não pode e não pode acontecer no programa, testes pré implementação e pós implementação do Calc Eletrônica.

Nele serão descritos os comportamentos esperados do programa, incluindo situações que devem ocorrer e situações que não devem ocorrer durante sua utilização.

Os testes serão planejados antes da implementação das funcionalidades e executados após a implementação, permitindo verificar se o programa desenvolvido corresponde aos requisitos e aos resultados esperados.

## 2. Planejamento dos testes

Os testes serão definidos com base nos requisitos do projeto e nas funcionalidades planejadas para cada incremento.

Para cada funcionalidade serão consideradas:

- entradas válidas;
- entradas inválidas;
- resultados esperados;
- comportamentos que não devem ocorrer;
- situações de erro;
- limites ou condições específicas da operação.

## 3. Testes pré-implementação

Antes da implementação do código, serão definidos os casos de teste e seus respectivos resultados esperados.

Essa etapa servirá para determinar previamente o que deverá ser verificado quando a funcionalidade for implementada.

Os testes pré-implementação não consistem na execução do código, mas no planejamento das situações que deverão ser posteriormente verificadas.

## 4. Testes pós-implementação

Após a implementação de cada funcionalidade, os testes planejados serão executados para verificar o comportamento real do programa.

Os resultados obtidos serão comparados com os resultados esperados definidos anteriormente.

Caso seja identificado algum comportamento incorreto, será realizada a correção necessária e o teste deverá ser executado novamente.

## 5. Casos de teste

Cada caso de teste deverá apresentar, quando aplicável:

- Identificação do teste;
- Funcionalidade testada;
- Entrada utilizada;
- Resultado esperado;
- Resultado obtido;
- Situação do teste;
- Observações.

## 6. Critérios de aprovação

Um teste será considerado aprovado quando o comportamento apresentado pelo programa corresponder ao resultado esperado e atender aos requisitos definidos para a funcionalidade.

Caso o resultado obtido seja diferente do esperado, o teste será considerado reprovado e a causa deverá ser analisada para posterior correção.

# Comportamentos Esperados pré-implementação

Nesta etapa serão definidos os comportamentos esperados para cada funcionalidade, antes da implementação do código. Os comportamentos aqui apresentados serão usados como referência para os testes que serão realizados posteriormente.

## Operações Básicas

### Adição

O programa deverá:

- Receber no mínimo dois valores informados pelo usuário;
- Realizar a soma dos valores;
- Apresentar o resultado correto;
- Apresentar os valores utilizados no cálculo;
- Apresentar uma explicação da operação realizada.

Não deverá:

- Apresentar resultado incorreto;
- Aceitar uma entrada inválida sem realizar o tratamento adequado.

### Subtração

O programa deverá:

- Receber no mínimo dois valores informados pelo usuário;
- Realizar a subtração dos valores, seguindo a ordem em que foram informados, da esquerda para a direita;
- Apresentar o resultado correto;
- Apresentar os valores utilizados no cálculo;
- Apresentar uma explicação da operação realizada.

Não deverá:

- Apresentar resultado incorreto;
- Apresentar comportamento inesperado diante de entradas inválidas.

### Multiplicação

O programa deverá:

- Receber no mínimo dois valores informados pelo usuário;
- Realizar a multiplicação dos valores;
- Apresentar o resultado correto;
- Apresentar os valores utilizados no cálculo;
- Apresentar uma explicação do cálculo realizado.

Não deverá:

- Apresentar resultado incorreto;
- Apresentar comportamento inesperado diante de entradas inválidas.

### Divisão

O programa deverá:

- Receber no mínimo dois valores informados pelo usuário;
- Realizar a divisão dos valores, seguindo a ordem em que foram informados, da esquerda para a direita;
- Apresentar o resultado correto;
- Apresentar os valores utilizados no cálculo;
- Apresentar uma explicação da operação realizada.

Não deverá:

- Apresentar resultado incorreto;
- Permitir divisão por zero;
- Apresentar comportamento inesperado diante de entradas inválidas.

# Operações Eletrônicas

## Lei de Ohm

### Cálculo de tensão

O programa deverá:

- Receber os valores de:
  - I = corrente;
  - R = resistência.
- Utilizar a fórmula:

**V = R × I**

- Realizar a multiplicação dos valores;
- Apresentar os valores utilizados no cálculo;
- Apresentar a fórmula utilizada;
- Apresentar a substituição dos valores na fórmula;
- Apresentar o resultado correto;
- Apresentar uma explicação do cálculo realizado.

#### Exemplo de apresentação esperada:

**Valores:**

R = 100 Ω

I = 0,5 A

**Fórmula:**

V = R × I

**Substituindo:**

V = 100 × 0,5

**Resultado:**

V = 50 V

### Cálculo de corrente

O programa deverá:

- Receber os valores de:
  - V = tensão;
  - R = resistência.
- Utilizar a fórmula:

**I = V ÷ R**

- Realizar a divisão de V por R;
- Apresentar os valores utilizados no cálculo;
- Apresentar a fórmula utilizada;
- Apresentar a substituição dos valores na fórmula;
- Apresentar o resultado correto;
- Apresentar uma explicação do cálculo realizado.

Não deverá:

- Apresentar resultado incorreto;
- Permitir divisão por zero;
- Apresentar comportamento inesperado diante de entradas inválidas.

### Cálculo de resistência

O programa deverá:

- Receber os valores de:
  - V = tensão;
  - I = corrente.
- Utilizar a fórmula:

**R = V ÷ I**

- Realizar a divisão de V por I;
- Apresentar os valores utilizados no cálculo;
- Apresentar a fórmula utilizada;
- Apresentar a substituição dos valores na fórmula;
- Apresentar o resultado correto;
- Apresentar uma explicação do cálculo realizado.

Não deverá:

- Apresentar resultado incorreto;
- Permitir divisão por zero;
- Apresentar comportamento inesperado diante de entradas inválidas.

## Potência

O programa deverá:

- Receber valores de:
  - V = tensão;
  - I = corrente;
  - R = resistência.
- Possibilitar a realização do cálculo utilizando os valores disponíveis e a fórmula adequada.

### Tensão e corrente

Deverá utilizar:

**P = V × I**

### Resistência e corrente

Deverá utilizar:

**P = R × I²**

### Tensão e resistência

Deverá utilizar:

**P = V² ÷ R**

Para cada forma de cálculo, o programa deverá:

- Identificar os valores necessários;
- Utilizar a fórmula correspondente;
- Apresentar os valores utilizados no cálculo;
- Apresentar a fórmula utilizada;
- Apresentar a substituição dos valores na fórmula;
- Realizar o cálculo;
- Apresentar o resultado correto;
- Apresentar uma explicação do cálculo realizado.

### Exemplo de apresentação esperada:

**Valores:**

V = 12 V

I = 2 A

**Fórmula:**

P = V × I

**Substituindo:**

P = 12 × 2

**Resultado:**

P = 24 W

Não deverá:

- Apresentar resultado incorreto;
- Utilizar uma fórmula incompatível com os valores informados;
- Apresentar comportamento inesperado diante de entradas inválidas;
- Permitir cálculos com valores inválidos sem o tratamento adequado.

## Resistores em Série

O programa deverá permitir:

- Receber dois ou mais valores de resistência;
- Realizar a soma das resistências para obter a resistência equivalente do circuito;
- Utilizar a fórmula:

**Req = R1 + R2 + R3 + ... + Rn**

- Apresentar os valores utilizados no cálculo;
- Apresentar a fórmula utilizada;
- Apresentar a substituição dos valores na fórmula;
- Apresentar a resistência equivalente do circuito;
- Apresentar uma explicação do cálculo realizado.

### Exemplo de apresentação esperada:

**Valores:**

R1 = 100 Ω

R2 = 220 Ω

R3 = 330 Ω

**Fórmula:**

Req = R1 + R2 + R3

**Substituindo:**

Req = 100 + 220 + 330

**Resultado:**

Req = 650 Ω

Não deverá:

- Apresentar resultado incorreto;
- Permitir o cálculo com menos de dois resistores;
- Aceitar valores de resistência inválidos;
- Apresentar comportamento inesperado diante de entradas inválidas.

## Resistores em Paralelo

O programa deverá permitir:

- Solicitar a quantidade de resistores que serão utilizados no cálculo;
- Receber dois ou mais valores de resistência;
- Receber os valores individualmente, identificando cada resistor, como R1, R2, R3 e assim por diante;
- Calcular a resistência equivalente dos resistores informados;
- Utilizar a fórmula geral:

**1/Req = 1/R1 + 1/R2 + 1/R3 + ... + 1/Rn**

- Apresentar os valores utilizados no cálculo;
- Apresentar a fórmula utilizada;
- Apresentar a substituição dos valores na fórmula;
- Realizar o cálculo;
- Apresentar o resultado da resistência equivalente;
- Apresentar uma explicação da operação realizada.

### Exemplo de entrada esperada:

**Quantidade de resistores:** 3

R1 = 100 Ω

R2 = 220 Ω

R3 = 330 Ω

### Exemplo de apresentação esperada:

**Fórmula:**

1/Req = 1/R1 + 1/R2 + 1/R3

**Substituindo:**

1/Req = 1/100 + 1/220 + 1/330

**Resultado:**

Req = ...

Não deverá:

- Permitir o cálculo com menos de dois resistores;
- Aceitar valores de resistência inválidos;
- Permitir resistência igual a zero em um cálculo que resulte em divisão por zero;
- Apresentar resultado incorreto;
- Apresentar comportamento inesperado diante de entradas inválidas.