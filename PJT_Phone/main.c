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

		system("cls");

		switch (command) {
			case 'n': {
					iteration = func_new(Ptr_Main_DB, iteration);
					printf("\n");
					break;
				}
			case 'd': {
					func_dis(Ptr_Main_DB, iteration);
					printf("\n");
					break;
				}
			case 'm': {
					func_modi(Ptr_Main_DB, iteration);
					break;
				}
			case 'q': {
					printf("Program exit\n");
					return 0;
				}
			default: {
					printf("Warning: Invalid command\n\n");
					break;
				}
		}
		while (getchar() != '\n');
	}

	return 0;
}