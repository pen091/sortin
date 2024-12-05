#include <stdio.h>
#include <stdlib.h>
#include "../include/pen.h"

int main(void) {
	int decision, choice, n;

	printf("\n\n");
	
	printf("Installing FIGLET ...\n\n");
	printf("Press [0 for android] or [1 for laptop/desktop : ");
	scanf("%d", &decision);

	if (decision == 0) {
		system("apt update && apt upgrade -y");
		system("apt install figlet -y");
	}
	else if (decision == 1) {
		system("sudo apt update ");
		system("sudo apt upgrade -y");
		system("sudo apt-get install figlet -y");
	}
	else {
		printf("wrong input\n");
		exit(EXIT_FAILURE);
	}

	printf("\n\n");
	system("figlet sortin");
	
	printf("\n\n");
	menu();

	printf("Enter your choice [ 0 = 3 ] : ");
	scanf("%d", &choice);

	printf("\t\tAllocate memory please : ");
	scanf("%d", &n);

	int s[n];

	switch (choice)
	{
		case 1 : ascending_sort(s, n);
			 break;

		case 2 : decending_sort(s, n);
			break;

		case 0 : exit(EXIT_SUCCESS);

		default :
			 exit(EXIT_FAILURE);
	}

	return 0;
}
