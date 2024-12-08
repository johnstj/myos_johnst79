// Joe Johnston
#include "console.h"
#include "keyboard.h"
#include "portmap.h"

void main() {
	// Joe Johnston HWP4
	clear_terminal();

	uint8_t byte;

	while(1) {
		while ( byte = scan()) {
			print_character(charmap[byte]);
		}
	}
}
