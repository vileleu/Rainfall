#include <stdio.h>
#include <stdlib.h>

int		run(void) {
	fwrite("Good... Wait what?\n", 19, 1, stdout);
	return (system("/bin/sh"));
}

int     main() {
	char buffer[64];

    gets(buffer);
    return (0);
}