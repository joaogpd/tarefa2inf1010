#include <stdio.h>
#include <stdlib.h>
#include "binstree.h"

typedef struct binstree BinSTree;
struct binstree {
    int key;
    BinSTree* parent;
    BinSTree* left;
    BinSTree* right;
};

/* Retorna NULL para indicar a criacao da arvore */
BinSTree* cria_bst(void) {
    return NULL;
}

/* Insere um no na arvore b, de chave key. 
 * Retorna a versao atualizada da arvore
 */
BinSTree* insere_bst(BinSTree* b, int key) {
    if (b == NULL) {
        b = (BinSTree*)malloc(sizeof(BinSTree));
        b->key = key;
        b->left = NULL;
	b->right = NULL;
    }
    else if (key < b->key)
        b->left = insere_bst(b->left, key);
    else if (key > b->key)
        b->right = insere_bst(b->right, key);
    return b;
}

/* A funcao imprime_bt imprime os conteudos da arvore b em pre-
 * ordem
 */
void imprime_bst(BinSTree* b) {
    printf("(");
    if (b != NULL) {
        printf(" %d ", b->key);
	printf(" %p %p %p ", b, b->left, b->right);
        imprime_bst(b->left);
        imprime_bst(b->right);
    }
    printf(")");
}

/* A funcao verifica se a arvore b inserida e binaria de busca.
 * Se sim, retorna 1, caso contrario, 0. Para um caso de arvore
 * vazia, retornaria 1.
 */
int verifica_bst(BinSTree* b) {
    if (b == NULL) return 1;
    if (b->right != NULL && b->key > b->right->key) return 0;
    else if (b->left != NULL && b->key < b->left->key) return 0;
    verifica_bst(b->right);
    verifica_bst(b->left);
    return 1;
}

/* A funcao altura_bt calcula a altura do maior ramo de uma arvore.
 * Retorna o valor dessa altura, com base em uma arvore b
 */
int altura_bst(BinSTree* b) {
    if (b == NULL)
        return 0;
    else {
        int alt_left = altura_bst(b->left);
        int alt_right = altura_bst(b->right);

        return ((alt_left > alt_right) ? alt_left : alt_right) + 1;
    }
}

/* A funcao libera_bt libera a memoria alocada da arvore b
 * Ao final da execucao, retorna NULL
 */
BinSTree* libera_bst(BinSTree* b) {
    if (b == NULL) return NULL;
    else {
        libera_bst(b->left);
        libera_bst(b->right);
        free(b);
    }
    return b;
}

/* A funcao troca_bt troca as subarvores direita e esquerda
 * da arvore. Recebe uma arvore b, e retorna uma arvore
 * atualizada
 */
BinSTree* troca_bst(BinSTree* b) {
    if (b == NULL) return b;
    else {
        BinSTree* temp = b->left;
        b->left = b->right;
        b->right = temp;
        troca_bst(b->left);
        troca_bst(b->right);
    }
    return b;
}

