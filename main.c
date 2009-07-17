/*
  te, a small text editor for unix.
*/

#include <stdio.h>
#include <curses.h>
#include "interp.h"
#include "screen.h"

extern struct te_buffer *current_buf;

int main(int argc, char **argv)
{
	init_buffers();
	init_interp();
	init_windows();

	current_buf = load_buffer("tests/bufferfuncs.c");

	paint_buffer(current_buf);
	refresh();
	input_loop();

}

