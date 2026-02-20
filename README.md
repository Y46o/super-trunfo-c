# Super Trunfo em C

Projeto desenvolvido em linguagem C como parte da disciplina de Introdução à Programação de Computadores.

Este projeto implementa progressivamente a lógica do jogo **Super Trunfo**, evoluindo desde o cadastro de cartas até comparações avançadas com múltiplos atributos.

---

## Objetivos do Projeto

- Aplicar conceitos fundamentais da linguagem C.
- Trabalhar com variáveis e tipos primitivos.
- Implementar operadores aritméticos e relacionais.
- Utilizar estruturas de decisão (`if`, `if-else`, `switch`).
- Desenvolver menus interativos no terminal.
- Implementar lógica de comparação entre cartas.
- Utilizar operador ternário.
- Criar código organizado e bem documentado.

---

## Funcionalidades Implementadas

- Cadastro de duas cartas  
- Cálculo de Densidade Demográfica  
- Cálculo de PIB per capita  
- Comparação com um único atributo  
- Menu interativo com `switch`  
- Comparação com dois atributos  
- Soma dos atributos para decisão final  
- Tratamento de empate  
- Tratamento de opção inválida  

---

## Como Funciona

O programa permite que o usuário:

1. Escolha o primeiro atributo para comparação.
2. Escolha o segundo atributo (dinamicamente, sem repetir o primeiro).
3. O sistema compara os atributos.
4. Soma os valores.
5. Determina o vencedor ou empate.

---

## Atributos Disponíveis

1. População  
2. Área  
3. PIB  
4. Pontos Turísticos  
5. Densidade Demográfica *(menor valor vence)*  

---

## Como Compilar

No terminal, dentro da pasta do projeto:

```bash
gcc super_trunfo.c -o super_trunfo -Wall -Wextra

Windows:
Bash - .\super_trunfo

Linux / Mac:
Bash - ./super_trunfo

````
## Exemplo de Execução
````
====== SUPER TRUNFO ======
Escolha o PRIMEIRO atributo:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Opcao: 1

Escolha o SEGUNDO atributo:
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Opcao: 3

====== RESULTADO ======
Brasil - Soma: 214000001.84
Argentina - Soma: 46000000.63
Vencedor: Brasil
`````
Desenvolvido por Yago Nardin
Disciplina: Introdução à Programação de Computadores
Linguagem: C
