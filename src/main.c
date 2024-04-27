// INCLUDES

#include <stdio.h>
#include "lib/canvas.c"

// MAIN

int main(){                                                                    // define main function
	struct canvas surface = new_canvas(5,5);                                   // create a canvas 5x5
	surface = reset_canvas(surface);                                           // fill canvas with blank chars
	surface = write_canvas(surface, 'A', 1, 1);                                // write to surface 'A' at (1,1)
	render_canvas(surface);                                                    // render the canvas
}
