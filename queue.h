#ifndef QUEUE_H
#define QUEUE_H

typedef struct no No;
typedef struct fila Fila;
typedef struct bintree BinTree;

Fila* cria_fila(void);
int vazia_fila(Fila* f);
void insere_fila(Fila* f, BinTree* b);
BinTree* retira_fila(Fila* f);
Fila* libera_fila(Fila* f);

#endif
