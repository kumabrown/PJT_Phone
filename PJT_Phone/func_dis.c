#include "main.h"

void func_dis(DB *dis_DB) {
	int i = 0;
	int n = sizeof(dis_DB);

	for (; i < n; i++) {
		printf("%d information\n", i + 1);
		printf("\tName: %s\n", (dis_DB + i)->name);
		printf("\tH.P.: %s\n", (dis_DB + i)->number);
	}
}
