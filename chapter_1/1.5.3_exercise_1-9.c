#include <stdio.h>

/* copy input to output replacing each string
	of one or more blanks with a single blank */
main() {
	int c, blanks;

	blanks = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanks;
		else
			blanks = 0;
		if(blanks <= 1)
			putchar(c);
	}
}
