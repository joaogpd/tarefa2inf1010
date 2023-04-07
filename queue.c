#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

typedef struct bintree BinTree;

typedef struct no No;
struct no {
    BinTree* data;
    No* next;
};

typedef struct fila Fila;
struct fila {
    No* ini;
    No* fim;
};

Fila* cria_fila(void) {
    Fila* novo = (Fila*)malloc(sizeof(Fila));
    novo->ini = novo->fim = NULL;
    return novo;
}

int vazia_fila(Fila* f) {
    return (f->ini == NULL);
}

void insere_fila(Fila* f, BinTree* b) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->data = b;
    novo_no->next = NULL;
    if (f->ini == NULL) {
	f->ini = f->fim = novo_no;
	return;
    }
    f->fim->next = novo_no;
    f->fim = novo_no;
}

BinTree* retira_fila(Fila* f) {
    if (f->ini == NULL) 
        return NULL;
    No* temp = f->ini;
    BinTree* bt_node = f->ini->data;
    f->ini = f->ini->next;
    if (f->ini == NULL) 
	f->fim = NULL;
    free(temp);
    return bt_node;
}

Fila* libera_fila(Fila* f) {
    No* r = NULL;
    No* p = f->ini;
    while (p != NULL) {
        r = p;
	p = p->next;
	free(r);
    }
    return NULL;
}
