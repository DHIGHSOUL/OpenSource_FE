#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	for(int i=1; i<argc; i++) {
		char *env = getenv(argv[i]);
		printf("%s = %s\n", argv[i], env);
	}
	exit(0);
}
