#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 20
#define COUNT 50

typedef struct {
	char name[N];
	char number[N];
} DB;

void func_new(DB *new_DB);
void func_dis(DB *dis_DB);
