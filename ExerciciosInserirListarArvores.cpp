#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Estrutura do Nodo
typedef struct Nodo {
    int valor;
    struct Nodo *esq;
    struct Nodo *dir;
} Nodo;

// 1) Inserção na árvore (BST)
Nodo* add(Nodo *n, int valor) {
	
    // Se chegou em um espaço vazio, cria um novo nodo
    if (n == NULL) {
        Nodo *novo = (Nodo*) malloc(sizeof(Nodo));
        novo->valor = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }

    // Decide se vai para esquerda ou direita
    if (valor < n->valor){
    	n->esq = add(n->esq, valor);
	}
    else{
    	n->dir = add(n->dir, valor); // repetidos vão pra direita
	}
    return n;
}

// 2) Impressão em ordem (crescente)
void imprimir(Nodo *n) {
    if (n != NULL) {
        imprimir(n->esq);           // esquerda
        printf("%d ", n->valor);    // raiz
        imprimir(n->dir);           // direita
    }
}

// 3) Impressão em ordem decrescente
void imprimirDecrescente(Nodo *n) {
    if (n != NULL) {
        imprimirDecrescente(n->dir); // direita primeiro
        printf("%d ", n->valor);
        imprimirDecrescente(n->esq);
    }
}

// 4) Verificar se valor existe
int existe(Nodo *n, int valor) {
    if (n == NULL){
    	return 0;
	}
       
    if (n->valor == valor){
    	return 1;
	}

    if (valor < n->valor){
    	return existe(n->esq, valor);
	}
    else{
    	return existe(n->dir, valor);
	}
}

// 5) Contar quantidade de nodos
int contar(Nodo *n) {
    if (n == NULL){
    	return 0;
	}
	
    return 1 + contar(n->esq) + contar(n->dir);
}

// 6) Encontrar maior valor
int maior(Nodo *n) {
    if (n == NULL) {
        printf("Árvore vazia!\n");
        return -1;
    }

    // Vai sempre para a direita
    while (n->dir != NULL) {
        n = n->dir;
    }

    return n->valor;
}

// 7) Soma de todos os valores
int soma(Nodo *n) {
    if (n == NULL){
    	return 0;
	}

    return n->valor + soma(n->esq) + soma(n->dir);
}

// MAIN (testando tudo)
int main() {
	setlocale(LC_ALL, "Portuguese");
    Nodo *raiz = NULL;

    // Inserções do exercício
    raiz = add(raiz, 5);
    raiz = add(raiz, 2);
    raiz = add(raiz, 1);
    raiz = add(raiz, 8);
    raiz = add(raiz, 4);

    printf("Impressao crescente (in-order): ");
    imprimir(raiz);

    printf("\nImpressao decrescente: ");
    imprimirDecrescente(raiz);
    
    printf("\nExiste 4? %d", existe(raiz, 4));
    printf("\nExiste 10? %d", existe(raiz, 10));
    printf("\nQuantidade de nodos: %d", contar(raiz));
    printf("\nMaior valor: %d", maior(raiz));
    printf("\nSoma dos valores: %d", soma(raiz));
    printf("\n");
    return 0;
}
