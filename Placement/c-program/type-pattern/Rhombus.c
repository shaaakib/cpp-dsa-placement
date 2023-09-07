// C Program to print the rhombus pattern using alphabet
#include <stdio.h>

int main()
{
	int rows = 5;
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < rows - i - 1; j++) {
			printf(" ");
		}

		for (int k = 0; k < rows; k++) {
			printf("%c ", k + 'A');
		}
		printf("\n");
	}
	return 0;
}
