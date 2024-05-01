// INCLUDES

#include <stdio.h>
#include "lib/shape.c"

// MAIN

int main(){                                                                    // define main function
	struct canvas surface = new_canvas(10,10);                                 // create a canvas 10x10
	surface = reset_canvas(surface);                                           // fill canvas with blank chars
	surface = draw_canvas(surface, 'B', 2, 1);                                 // write to surface 'A' at (1,1)
	surface = draw_line(surface, 0, 0, 10, 10);                                // draw line from p1 to p2 on canvas
	render_canvas(surface);                                                    // render the canvas
}
