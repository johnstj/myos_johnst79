// Joe Johnston HWP2
#include "include/console.h"

void main() {

	char* const VGA_BUFFER = (char*) 0xb8000;
	char* str = "Hello World";

	// Joe Johnston HWP2
	clear_terminal();
	/*
	for (int i=0; str[i] != '\0'; i++) {
		VGA_BUFFER[i*2] = str[i];
	}
	*/
	print_string("HELLO");
	print_line("WORLD");
	print_string("TODAY");
	return;
}
