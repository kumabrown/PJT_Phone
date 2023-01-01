#include "main.h"

int main(void) {
	int iteration = 0;
	char command;
	
	DB Main_DB[COUNT];
	memset(Main_DB, 0, sizeof(Main_DB));

	DB *Ptr_Main_DB = &Main_DB;
	
	for (;;) {
		printf("Information Program\n");
		printf("\tn: Add Contact Information\n");
		printf("\td: Display Contact Information\n");
		printf("\tm: Modify Contact Information\n");
		printf("\tq: Program exit\n");
		
		printf("\nEnter command: ");
		scanf_s("%c", &command, 1);

		switch (command) {
			case 'n': {
					system("cls");
					iteration = func_new(Ptr_Main_DB, iteration);
					printf("\n");
					break;
				}
			case 'd': {
					system("cls");
					func_dis(Ptr_Main_DB, iteration);
					printf("\n");
					break;
				}
			case 'm': {
					system("cls");
					func_modi(Ptr_Main_DB, iteration);
					break;
				}
			case 'q': {
					printf("Program done...\n");
					printf("Program exit...\n");
					return 0;
				}
			default: {
					printf("Warning: Invalid command\n\n");
					break;
				}
		}
		while (getchar() != '\n');
	}

	system("pause");

	return 0;
}