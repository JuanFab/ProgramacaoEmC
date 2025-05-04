# Super Trunfo - Nível Mestre

Este é um projeto em C desenvolvido como parte do desafio **"Nível Mestre"** da disciplina de Sistemas da Informação com o professor Sergio Cardoso.

## 🎯 Objetivo

Criar um jogo estilo Super Trunfo, onde o jogador compara atributos entre duas cartas de estados brasileiros com base em dados como população, área, PIB, pontos turísticos e densidade populacional.

## 🚀 Como compilar e executar

### 1. Compile o programa:

```bash
gcc super_trunfo.c -o super_trunfo
```

### 2. Execute:

```bash
./super_trunfo
```

---

## 📄 Informações do Projeto

- **Disciplina:** Sistemas da Informação  
- **Professor:** Sergio Cardoso  
- **Turma:** 9002  
- **Autor:** Juan Fabio Martins Silva  
- **Data:** 05/05 - 11:30

---

## 🕹️ Como funciona

O programa solicita que o jogador insira os dados de duas cartas de estados brasileiros. Cada carta possui os seguintes atributos:

- Código da carta
- Nome do estado
- População
- Área
- PIB
- Número de pontos turísticos

Com esses dados, o programa calcula automaticamente a densidade populacional de cada estado.

Após o cadastro das cartas, o jogador escolhe **dois atributos** para comparar entre as cartas. A soma dos valores desses atributos determina qual carta vence. Em caso de empate, o programa notifica o resultado.

---

## 📌 Exemplo de atributos disponíveis para comparação:

1. População  
2. Área  
3. PIB  
4. Pontos turísticos  
5. Densidade populacional (vence a menor)

---

## ✅ Resultado

O programa exibe os dados das duas cartas e informa o vencedor com base nos atributos escolhidos.

---
