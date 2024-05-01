// INCLUDES

#include <stdio.h>
#include "canvas.c"

// DRAW LINE FUNCTION

struct canvas draw_line(struct canvas surface, int x1, int y1, int x2, int y2){          // create a function to draw line to canvas
	int dx = x2 - x1;                                                          // define distance between first and last x coordinate
	int dy = y2 - y1;                                                          // define distance between first and last y coordinate
	for(int x = x1; x < x2; x++){                                              // iterate through x values from p1 to p2
		int y = y1 + dy * (x - x1) / dx;                                       // use the distance to find the next corrisponding y value for x
		surface = draw_canvas(surface, '#', x, y);                             // draw the point
	}
	for(int y = y1; y < y2; y++){                                              // iterate through y values from p1 to p2 (to fill in the gaps)
		int x = x1 + dx * (y - y1) / dy;                                       // use the distance to find the next corrisponding x value for y
		surface = draw_canvas(surface, '#', x, y);                             // draw the point
	}
	return surface;                                                            // return modified canvas
}

struct canvas draw_rect(struct canvas surface, int x, int y, int w, int h){    // create a function to draw a rectangle
	surface = draw_line(surface, x, y, x, y+h);                                          // draw left side of shape
	surface = draw_line(surface, x, y+h, x+w, y+h);                                      // draw bottom of shape
	surface = draw_line(surface, x+w, y, x+w, y+h);                                      // draw right side of shape
	surface = draw_line(surface, x, y, x+w, y);                                          // draw top of shape
	return surface;
}
