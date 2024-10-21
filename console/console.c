// Joe Johnston HWP2
#include "../include/console.h"

static int terminal_position = 0;

void clear_terminal() {
	char* const VGA_BUFFER = (char*) 0xb8000;

	for (int i=0; i < VGA_WIDTH * VGA_HEIGHT; i++) {
		if (i % 2 == 0) {
			VGA_BUFFER[i] = '\0';
		}
		else {
			VGA_BUFFER[i] = 0x07;
		}
	}
	return;
}

void print_line(char* str) {
	print_string(str);
	print_character('\n');

	return;
}

void print_string(char* str) {
	for (int i=0; str[i] != '\0'; i++) {
		print_character(str[i]);
	}

	return;
}

void print_character(char c) {
	char* const VGA_BUFFER = (char*) 0xb8000;
	
	switch(c) {
		case '\n':
			terminal_position += (VGA_WIDTH - 
					(terminal_position % VGA_WIDTH));
			break;
		default:
			VGA_BUFFER[terminal_position 
				* VGA_BYTES_PER_CHARACTER] = c;
			VGA_BUFFER[terminal_position 
				* VGA_BYTES_PER_CHARACTER - 1] = 0x07;
			terminal_position += 1;
			break;
	}
	
	return;
}
