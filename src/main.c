// INCLUDES

#include <stdio.h>
#include "lib/shape.c"

// MAIN

int main(){                                                                    // define main function
	struct canvas surface = new_canvas(30,30);                                 // create a canvas 30x30
	surface = reset_canvas(surface);                                           // fill canvas with blank chars
	surface = draw_canvas(surface, 'B', 10, 1);                                // write to surface 'A' at (10,1)
	surface = draw_line(surface, 0, 0, 10, 10);                                // draw line from p1 to p2 on canvas
	surface = draw_rect(surface, 12, 12, 9, 9);                                // draw rect 5x5 at (12,12)
	render_canvas(surface);                                                    // render the canvas
}
