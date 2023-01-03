#include "main.h"

void func_dis(DB *dis_DB, int n) {
	int i = 0;
	printf("========== The process of showing contacts information stored in the storage ==========\n\n");
	printf("Number  |          Name          |          H.P.          |\n");
	for (; i < n; i++) {
		printf("%6d  |  %-20s  |  %-20s  |\n", (i + 1), (dis_DB + i)->name, (dis_DB + i)->number);
	}
	printf("\n");
}
