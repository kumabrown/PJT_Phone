#include "main.h"

void func_modi(DB *modi_DB, int n) {
	int num;
	char command;
	char temp_name[N] = "NAME";
	char temp_number[N] = "PHONE NUMBER";

	printf("========== The process of editing stored contacts information ==========\n\n");
	for (;;) {
		printf("<< Before Data >>\n\n");
		func_dis(modi_DB, n);

		printf("\nEnter the number of the information you want to edit: ");
		scanf_s("%d", &num);

		while (getchar() != '\n');

		printf("\nEnter the name and phone number\n");
		printf("Name: ");
		gets_s(temp_name, N);

		printf("Phone Number: ");
		gets_s(temp_number, N);

		strcpy_s((modi_DB + (num - 1))->name, N, temp_name);
		strcpy_s((modi_DB + (num - 1))->number, N, temp_number);

		printf("\n\n<< After Data >>\n\n");
		func_dis(modi_DB, n);

		printf("Continue?? ");
		scanf_s("%c", &command, 1);
		printf("\n");

		if ((command == 'N') || (command == 'n')) {
			break;
		}
	}
}