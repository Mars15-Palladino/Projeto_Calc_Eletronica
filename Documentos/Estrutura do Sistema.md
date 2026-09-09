# Estrutura do sistema

O sistema da calculadora, será desenvolvido de forma modular, buscando deixar o código fácil de se trabalhar, e separando suas funcionalidades para o seu correto funcionamento.

O sistema será desenvolvido em linguagem C e inicialmente funcionará em
ambiente de terminal, com possibilidades para esxpansões futuras.

Sua estrtura será dividida em módulos diferetes, com cada um tendo resposabilidade por suas funções, assim permintindo  testes, mautenções e alterações futuras de forma facilitada. 


# Módulos

|Calc Eletrônica
                |Programa principal
                ├── Menus
                │
                ├── Operações básicas
                │
                ├── Operações eletrônicas
                │
                |Resultados/ Apresetação
                

## Funções das camadas

### Programa Principal

Essa parte do programa fara o gerenciamento e chamadas dos outros módulos/arquivos, atuando como um centro de logistica, fazendo a chamada de apenas os arquivos que forem necessários para a operação desejada.

Tendo ligação ddireta com o arquivo dos menus, que servirá para chamar as fuções necessárias para o código funcioar.

### Menus

responsável por mostrar opções para o usuário e chamar a função necessária para operação requisitada, conterá as chamadas para os submennus operções básicas, operações eletrônicas

### Operações Básicas

Conterá os códigos detinadas a todas operações matemátticas básicas, que serão separadas em funções, soma, subtração, multiplicar, dividir e o que mais for adicionado em relação a Operações Básicas.

### Operações Eletrônicas

Conterá os códigos detinadas a todas operações matemáticas voltadas a eletrônica, que serão separadas em funções,Tensão (V), Corrente (I), Resistência (R) e o que mais for adicionado em relação a Operações voltadas a área da eletrônica

### Resultados/Apresetação

Módulos responsáveis pela arepsentação dos resultados e explicação da função que o usuário escolher, trazendo a operação matemática e sua explicação passo a passo. 