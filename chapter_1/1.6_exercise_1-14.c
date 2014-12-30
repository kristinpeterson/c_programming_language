#include <stdio.h>

#define ASCII_TABLE_SIZE 128

/* histogram of character frequencies */
main() {
	int c, i;
	int frequencies[ASCII_TABLE_SIZE];
	
	// initialize frequencies[] values to 0
	for (i = 0; i < ASCII_TABLE_SIZE; i++)
		frequencies[i] = 0;

	// iterate over stdin character by character
	// incrementing their respective ASCII value 
	// for each occurrance
	while ((c = getchar()) != EOF)
		++frequencies[c];

	// print histogram of frequencies
	printf("\n-----------------------------------------------------------------\n");
	printf(" ASCII:  FREQ\t ASCII:  FREQ\t ASCII:  FREQ\t ASCII:  FREQ");
	printf("\n-----------------------------------------------------------------\n");
	for (i = 0; i < ASCII_TABLE_SIZE; i++) {
		printf("%6d:%6d\t", i, frequencies[i]);
		if ((i + 1) % 4 == 0)
			printf("\n");
	}
	printf("------------------------------------------------------------------\n");
}
