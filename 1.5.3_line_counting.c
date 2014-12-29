#include <stdio.h>

/* count lines of input */
main() {
	int c, nl, blanks, tabs;

	nl = 0;
	blanks = 0;
	tabs = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tabs;
		else if (c == 32)
			++blanks;
	}

	printf("\nnewlines: %d\n", nl);
	printf("tabs: %d\n", tabs);
	printf("blanks: %d\n", blanks);
}
