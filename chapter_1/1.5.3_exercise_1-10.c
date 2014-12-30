#include <stdio.h>

/* copy input to output, replace tab w/ \t, backspace w/ \b,
	and each backslash w\ \\
	NOTE: to send a backspace to input press ^H (CTRL-H) */
main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}
