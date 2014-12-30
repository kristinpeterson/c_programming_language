#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* copy input to output one word per line */
main() {
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		putchar(c);
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if(c != '\n')
				putchar('\n');
		}
		else if (state == OUT)
			state = IN;
	}
}
