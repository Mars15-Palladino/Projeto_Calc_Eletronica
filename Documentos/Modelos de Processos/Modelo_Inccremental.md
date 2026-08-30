# Modelo de Processo Incremental — Calc Eletrônica

## 1. Objetivo

Descrever como o projeto Calc Eletrônica seria desenvolvido utilizando o Modelo de Processo Incremental, dividindo o desenvolvimento do sistema em partes funcionais chamadas de incrementos.

Cada incremento deverá adicionar novas funcionalidades ao sistema, mantendo o que já foi desenvolvido funcionando.

---

## 2. Desenvolvimento Incremental

O desenvolvimento da Calc Eletrônica será dividido em incrementos. Cada incremento terá um conjunto de funcionalidades definidas e, ao final, deverá resultar em uma versão funcional do programa.

### Incremento 1 — Estrutura e Operações Básicas

Neste primeiro incremento será desenvolvida a base da aplicação.

Funcionalidades:

* Estrutura inicial do programa;
* Menu principal;
* Menu de operações básicas;
* Adição;
* Subtração;
* Multiplicação;
* Divisão;
* Operações com números decimais;
* Tratamento de erros.

**Resultado esperado:**

Ao final deste incremento, o usuário deverá possuir uma calculadora básica funcional.

---

### Incremento 2 — Cálculos de Eletrônica

Após a conclusão da calculadora básica, serão adicionadas as primeiras funcionalidades voltadas à eletrônica.

Funcionalidades:

* Lei de Ohm;
* Cálculo de tensão;
* Cálculo de corrente;
* Cálculo de resistência;
* Cálculo de potência elétrica;
* Apresentação das fórmulas utilizadas;
* Apresentação do passo a passo dos cálculos.

**Resultado esperado:**

A aplicação passará a realizar cálculos básicos relacionados à eletrônica, além das operações matemáticas.

---

### Incremento 3 — Cálculos com Resistores

Neste incremento serão adicionadas funcionalidades relacionadas à associação de resistores.

Funcionalidades:

* Resistores em série;
* Resistores em paralelo;
* Cálculo da resistência equivalente;
* Apresentação do procedimento utilizado no cálculo.

**Resultado esperado:**

A calculadora deverá permitir realizar cálculos de associações de resistores.

---

### Incremento 4 — Código de Cores

Neste incremento será adicionada a funcionalidade de identificação de resistores através do código de cores.

Funcionalidades:

* Entrada das cores das faixas;
* Identificação do valor da resistência;
* Identificação da tolerância;
* Cálculo dos valores mínimo e máximo;
* Conversão de valor de resistência para código de cores.

**Resultado esperado:**

O usuário poderá utilizar a calculadora para identificar e interpretar resistores através do código de cores.

---

## 3. Evolução do Sistema

A cada incremento, o sistema deverá manter as funcionalidades desenvolvidas anteriormente e incorporar as novas funcionalidades.

Dessa forma:

Incremento 1 → Calculadora básica

Incremento 2 → Calculadora básica + Eletrônica

Incremento 3 → Calculadora básica + Eletrônica + Resistores

Incremento 4 → Calculadora básica + Eletrônica + Resistores + Código de cores

---

## 4. Justificativa da utilização do Modelo Incremental

O Modelo Incremental é adequado ao projeto Calc Eletrônica porque permite desenvolver e disponibilizar as funcionalidades em partes.

Inicialmente, pode ser desenvolvida uma calculadora básica funcional. Após sua conclusão, novas funcionalidades voltadas à eletrônica podem ser incorporadas gradualmente.

Esse processo também permite que os requisitos sejam aprimorados durante o desenvolvimento e que novas funcionalidades sejam planejadas para incrementos posteriores.
