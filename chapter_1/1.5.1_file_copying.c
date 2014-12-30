#include <stdio.h>

/* copy input to output; 2nd version 
	NOTE: ^D (CTRL-D) == EOF */
main() {
	int c;

	printf("EOF is: %d\n", EOF);
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
