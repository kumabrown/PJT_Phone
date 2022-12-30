#include "main.h"

void func_new(DB *new_DB) {
	int i = 0;
	char temp_name[N] = "NAME";
	char temp_number[N] = "PHONE NUMBER";
	char command;

	for (;;) {
		while (getchar() != '\n');

		printf("Name: ");
		gets_s(temp_name, N);

		printf("Phone Number: ");
		gets_s(temp_number, N);

		strcpy_s((new_DB + i)->name, N, temp_name);
		strcpy_s((new_DB + i)->number, N, temp_number);

		printf("Continue?? ");
		scanf_s("%c", &command, 1);

		if ((command == 'N') || (command == 'n')) {
			break;
		}
		else {
			i += 1;
			char temp_name[N] = "NAME";
			char temp_number[N] = "PHONE NUMBER";
		}
	}
}