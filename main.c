#include <stdio.h>
#include "bintree.h"
#include "binstree.h"
#include "execution.h"

int main(void) {
    int* rand_numbers = rand_nums(20, 10);

    BinTree* bt_tree = insert_level(rand_numbers, 10);
    BinSTree* bst_tree = insert_bst(rand_numbers, 10);

    imprime_bt(bt_tree);
    printf("\n");
    imprime_bst(bst_tree);
    printf("\n");

    printf("binaria de busca?\narvore 1 (bt): %d\narvore 2 (bst): %d\n",
		    0, verifica_bst(bst_tree));

    printf("altura?\narvore 1 (bt): %d\narvore 2 (bst): %d\n",
		    altura_bt(bt_tree),
		    altura_bst(bst_tree));

    bt_tree = troca_bt(bt_tree);
    bst_tree = troca_bst(bst_tree);

    imprime_bt(bt_tree);
    printf("\n");
    imprime_bst(bst_tree);
    printf("\n");

    bt_tree = libera_bt(bt_tree);
    bst_tree = libera_bst(bst_tree);

    return 0;
}
