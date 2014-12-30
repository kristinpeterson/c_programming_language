#include <stdio.h>

#define ASCII_TABLE_SIZE 128

/* histogram of character frequencies */
main() {
	int c, i, j;
	int frequencies[ASCII_TABLE_SIZE];
	
	// initialize frequencies[] values to 0
	for (i = 0; i < ASCII_TABLE_SIZE; i++)
		frequencies[i] = 0;

	// iterate over stdin character by character
	// incrementing the frequency value for each
	// occurance of a particular ASCII value
	while ((c = getchar()) != EOF)
		++frequencies[c];

	// print histogram of frequencies
	printf("\nHISTOGRAM OF FREQUENCIES");
	printf("\n----------------------------------\n");
	for (i = 0; i < ASCII_TABLE_SIZE; i++) {
		if (frequencies[i] > 0) {
			printf("%d:\t", i);
			for (j = 0; j < frequencies[i]; j++)
				printf("*");
			printf("\n");
		}
	}			

	// print ASCII table w/ frequencies of each character
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
