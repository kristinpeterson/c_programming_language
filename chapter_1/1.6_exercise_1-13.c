#include <stdio.h>

#define IN 1		/* inside a word */
#define OUT 0		/* outside a word */
#define BUFFSIZE 256	/* array buffer */

/* histogram of lenght of words in input */
main() {
	int i, j, c, nw, length, lengths_index, state;
	int lengths[BUFFSIZE];

	state = OUT;
	length = nw = lengths_index = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			lengths[lengths_index++] = ++length;
			length = 0;
		} else if (state == OUT) {
			state = IN;
			++nw;
		} else {
			++length;
		}
	}

	printf("\n-------------------------------------\n");
	for (i = 0; i < nw; i++) {
		printf("%d:\t", (i + 1));
		for (j = 0; j < lengths[i]; j++)
			printf("*");
		printf("\n");
	}
	printf("-------------------------------------\n");
}
