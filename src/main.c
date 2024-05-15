// INCLUDES

#include <stdio.h>
#include "lib/shape.c"

// MAIN

int main(){                                                                    // define main function
	struct canvas surface = new_canvas(30,30);                                 // create a canvas
	surface = reset_canvas(surface);                                           // fill canvas with blank chars
	surface = plot(surface, 'B', 10, 1);                                       // write a char to surface at point
	surface = draw_line(surface, 2, 0);                                        // draw a line to surface with slope and intercept
	render_canvas(surface);                                                    // render the canvas
}
