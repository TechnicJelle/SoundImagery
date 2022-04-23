#include <stdio.h>
#include "bass.h"

int main() {
	printf("Hello world!\n");
	if (HIWORD(BASS_GetVersion()) == BASSVERSION) {
		printf("[BASS] Correct version loaded!");
	} else {
		printf("[BASS] Incorrect version loaded!");
	}
	printf("\n");
	return 0;
}
