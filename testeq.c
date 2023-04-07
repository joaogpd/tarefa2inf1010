#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "bintree.h"

int main(void) {
    BinTree* teste = cria_bt(3, NULL, NULL);
    BinTree* teste2 = cria_bt(5, NULL, NULL);
    BinTree* teste3 = cria_bt(1, NULL, NULL);

    Fila* testef = cria_fila();

    insere_fila(testef, teste);
    insere_fila(testef, teste2);
    insere_fila(testef, teste3);

    printf("%p\n", teste);

    printf("%p\n", retira_fila(testef));

    printf("%p\n", retira_fila(testef));
    return 0;
}
