#include <stdio.h>
#include "bintree.h"

int main(void) {
    BinTree* teste1 = cria_bt(5, 
		        cria_bt(6, cria_vazia_bt(), 
				cria_bt(3, cria_vazia_bt(), cria_vazia_bt())),
			cria_bt(9, cria_vazia_bt(), cria_vazia_bt())
		    );

    imprime_bt(teste1);
    printf("\n");

    int teste_altura = altura_bt(teste1);

    printf("altura: %d\n", teste_altura);

    teste1 = troca_bt(teste1);

    imprime_bt(teste1);

    teste1 = libera_bt(teste1);
    printf("\n");

    return 0;
}
