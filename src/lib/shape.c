// INCLUDES

#include "shape.h"

// DRAW LINE FUNCTION

struct canvas draw_line(struct canvas surface, int slope, int y_intercept){    // function to draw a linear function to a surface
	int y = 0;
	int i = 0;
	for(int x = 0; x < surface.w; x++){                                        // iterate through x values from (0,0) to (w,w)
		y = slope * x + y_intercept;                                           // get the y coordinate based on the linear function
		surface = plot(surface, '#', x, i);
		while(i < y){                                                          // iterate through points until arriving at y destination 
			surface = plot(surface, '#', x, i);                                // 
			i++;
		}
		i = y;
	}
	return surface;                                                            // return the modified surface 
}
