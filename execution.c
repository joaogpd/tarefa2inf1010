#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bintree.h"
#include "binstree.h"

int* rand_nums(int max, int n) {
    srand(time(NULL));
    int* rand_array = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        int rand_int = (rand() % (max - 1)) + 1;
	printf("%d ", rand_int);
	rand_array[i] = rand_int;
    }
    printf("\n");
    return rand_array;
}

BinTree* insert_level(int* nums, int n) {
    BinTree* bt_new = cria_vazia_bt();
    for (int i = 0; i < n; i++) {
        bt_new = insere_bt_q(bt_new, nums[i]);
    }
    return bt_new;
}

BinSTree* insert_bst(int* nums, int n) {
    BinSTree* bst_new = cria_bst();
    for (int i = 0; i < n; i++) {
        bst_new = insere_bst(bst_new, nums[i]);
    }
    return bst_new;
}
