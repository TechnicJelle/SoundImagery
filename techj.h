//version 002

// import for print
#include <stdio.h>

// import for sleep
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void printi(int num) {
	printf("%d\n", num);
}

void prints(char string[]) {
	printf("%s\n", string);
}

void meSleep(int sec) {
	#ifdef _WIN32
	Sleep(sec*1000);
	#else
	sleep(sec);
	#endif
}
