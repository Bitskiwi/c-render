// INCLUDES

#include <stdio.h>
#include "lib/shape.c"

// MAIN

int main(){                                                                    // define main function
	struct canvas surface = new_canvas(10,10);                                 // create a canvas 30x30
	surface = reset_canvas(surface);                                           // fill canvas with blank chars
	surface = draw_canvas(surface, 'B', 2, 1);                                 // write to surface 'A' at (1,1)
	struct point p1 = new_point(0,0);                                          // make point (0,0)
	struct point p2 = new_point(10,0);                                         // make point (1,20)
	surface = draw_line(surface, p1, p2);                                      // draw line from p1 to p2 on canvas
	render_canvas(surface);                                                    // render the canvas
}
