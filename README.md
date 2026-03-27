# 🌳 Árvore Binária de Busca (BST) — Operações Básicas em C

Implementação de uma **Árvore Binária de Busca (BST)** em C com diversas operações fundamentais, como inserção, busca, contagem, soma e percursos em ordem crescente e decrescente.

---

## 📖 Visão Geral

Este projeto demonstra como trabalhar com árvores binárias de busca de forma prática, utilizando recursividade e ponteiros para implementar operações clássicas da estrutura.

---

## 🧠 Conceitos Abordados

* Estruturas (`struct`)
* Ponteiros e recursividade
* Alocação dinâmica (`malloc`)
* Árvores Binárias de Busca (BST)
* Percursos (in-order crescente e decrescente)
* Busca em árvore
* Operações agregadas (soma, contagem, máximo)

---

## 🏗️ Estrutura do Nodo

```c id="bq91qg"
typedef struct Nodo {
    int valor;
    struct Nodo *esq;
    struct Nodo *dir;
} Nodo;
```

---

## 🌲 Propriedade da BST

Para cada nodo:

* Valores menores ficam à esquerda
* Valores maiores (ou iguais) ficam à direita

---

## ⚙️ Funcionalidades

### ✔️ Inserção (`add`)

Insere valores mantendo a estrutura ordenada da BST.

```c id="twplsz"
Nodo* add(Nodo *n, int valor);
```

---

### ✔️ Impressão em Ordem Crescente

Percorre a árvore no formato **esquerda → raiz → direita**:

```c id="6svjnq"
void imprimir(Nodo *n);
```

---

### ✔️ Impressão em Ordem Decrescente

Percorre no formato **direita → raiz → esquerda**:

```c id="y1k5z1"
void imprimirDecrescente(Nodo *n);
```

---

### ✔️ Verificação de Existência (`existe`)

Retorna:

* `1` → valor encontrado
* `0` → valor não encontrado

```c id="h67o63"
int existe(Nodo *n, int valor);
```

---

### ✔️ Contagem de Nodos (`contar`)

Conta todos os elementos da árvore:

```c id="f3b5yt"
int contar(Nodo *n);
```

---

### ✔️ Maior Valor (`maior`)

Retorna o maior valor presente na árvore (extremo à direita):

```c id="o8m4hj"
int maior(Nodo *n);
```

---

### ✔️ Soma dos Valores (`soma`)

Soma todos os valores armazenados na árvore:

```c id="k8l0q1"
int soma(Nodo *n);
```

---

## 🔄 Estrutura da Árvore

Valores inseridos:

```id="0rznj4"
5, 2, 1, 8, 4
```

Representação:

```id="bj0wha"
        5
       / \
      2   8
     / \
    1   4
```

---

## ▶️ Como Executar

### 🔧 Compilação

```bash id="g2m9k6"
gcc main.c -o bst
```

### ▶️ Execução

```bash id="3qk5j8"
./bst
```

---

## 💻 Saída Esperada

```id="v4m7d2"
Impressao crescente (in-order): 1 2 4 5 8
Impressao decrescente: 8 5 4 2 1
Existe 4? 1
Existe 10? 0
Quantidade de nodos: 5
Maior valor: 8
Soma dos valores: 20
```

---

## 📚 Aprendizados

Com este projeto, é possível entender:

* Como navegar em árvores usando recursão
* Como implementar buscas eficientes
* Como calcular métricas sobre estruturas dinâmicas
* Diferença entre percursos crescente e decrescente

---

## 🚀 Melhorias Futuras

* [ ] Implementar remoção de nodos
* [ ] Balanceamento da árvore (AVL / Red-Black)
* [ ] Cálculo de altura da árvore
* [ ] Impressão visual (níveis)
* [ ] Interface interativa via terminal

---

## 👨‍💻 Autor

Leonardo Gomes Ferreira

---
