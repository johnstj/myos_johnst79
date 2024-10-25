// Joe Johnston HWP2
#include "console.h"

void main() {

	char* const VGA_BUFFER = (char*) 0xb8000;
	char* str = "Hello World";

	// Joe Johnston HWP2
	clear_terminal();

	print_string("HELLO");
	print_line("WORLD");
	print_string("TODAY");
	return;
}
