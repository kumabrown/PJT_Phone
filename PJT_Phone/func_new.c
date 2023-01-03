#include "main.h"

int func_new(DB *new_DB, int n) {
	char temp_name[N] = "NAME";
	char temp_number[N] = "PHONE NUMBER";
	char command;

	printf("========== The process of adding a new contact information ==========\n\n");

	for (;;) {
		while (getchar() != '\n');

		printf("Name: ");
		gets_s(temp_name, N);

		printf("Phone Number: ");
		gets_s(temp_number, N);

		strcpy_s((new_DB + n)->name, N, temp_name);
		strcpy_s((new_DB + n)->number, N, temp_number);

		printf("\nContinue?? ");
		scanf_s("%c", &command, 1);
		printf("\n");

		if ((command == 'N') || (command == 'n')) {
			n += 1;
			break;
		}
		else {
			n += 1;
			char temp_name[N] = "NAME";
			char temp_number[N] = "PHONE NUMBER";
		}
	}

	return n;
}