#include <stdio.h>
#include "binstree.h"

int main(void) {
    BinSTree* teste1 = cria_bst();

    imprime_bst(teste1);
    printf("\n");

    teste1 = insere_bst(teste1, 5); 
    teste1 = insere_bst(teste1, 15); 
    teste1 = insere_bst(teste1, 3); 
    teste1 = insere_bst(teste1, 28);
    teste1 = insere_bst(teste1, 7);
    teste1 = insere_bst(teste1, 2);
    teste1 = insere_bst(teste1, 4);

    imprime_bst(teste1);
    printf("\n");

    int teste_verific = verifica_bst(teste1);
    printf("%d\n", teste_verific);
    int teste_altura = altura_bst(teste1);
    printf("%d\n", teste_altura);

    teste1 = troca_bst(teste1);
    imprime_bst(teste1);
    printf("\n");

    teste_verific = verifica_bst(teste1);
    printf("%d\n", teste_verific);
    
    teste1 = libera_bst(teste1);

    return 0;
}
