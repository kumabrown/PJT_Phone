#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 20
#define COUNT 50

typedef struct {
	char name[N];
	char number[N];
} DB;

int main(void) {
	
	int i;
	char temp_name[N];
	char temp_number[N];
	
	DB Main_DB[COUNT];
	memset(Main_DB, 0, sizeof(Main_DB));

	DB *Ptr_Main_DB = &Main_DB;

	for (i = 0; i < 2; i++) {
		printf("Name: ");
		gets_s(temp_name, N);
		
		printf("Phone Number: ");
		gets_s(temp_number, N);

		strcpy_s((Ptr_Main_DB + i)->name, N, temp_name);
		strcpy_s((Ptr_Main_DB + i)->number, N, temp_number);

		printf("\n");
	}
	system("cls");
	for (i = 0; i < 2; i++) {
		printf("Name: %s\n", Main_DB[i].name);
		printf("H.P.: %s\n", Main_DB[i].number);
	}
	

	return 0;
}