/*
 ============================================================================
 Name        : ascii_symbols.c
 Author      : Sergei Aidinov
 Version     :
 Copyright   : WTFPL
 Description : Array of symbols in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	const int INIT_ASCII_CODE = 65;
	const int ROW_LENGTH = 8;
	const int ROW_QUANTITY = 8;
	const int GAP = 32;

	for (int row = 0; row < ROW_QUANTITY; row++) {
		int first_code_in_row = INIT_ASCII_CODE + row * ROW_LENGTH;
		for (int ascii_code = first_code_in_row;
				ascii_code < first_code_in_row + ROW_LENGTH; ascii_code++) {
			printf("%c", ascii_code);
		}
		printf("\n");
	}

	printf("\n");

	for (int row = 0; row < ROW_QUANTITY; row++) {
		int first_code_in_row = INIT_ASCII_CODE + row * ROW_LENGTH;
		for (int position_in_row = 0; position_in_row < ROW_LENGTH;
				position_in_row++) {
			if (position_in_row < ROW_QUANTITY - row - 1)
				printf("%c", GAP);
			else
				printf("%c", first_code_in_row + position_in_row);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
