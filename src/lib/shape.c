// INCLUDES

#include <stdio.h>
#include "canvas.c"

// POINT STRUCTURE

struct point {                                                                 // create a structure for a point
	int x;                                                                     // create member x
	int y;                                                                     // create member y
};

// POINT CONSTRUCTOR

struct point new_point(int x, int y){                                          // create function to create new point
	struct point instance;                                                     // create and instance of point
	instance.x = x;                                                            // set instance member x to x param
	instance.y = y;                                                            // set instance member y to y param
	return instance;                                                           // return the point
}

// DRAW LINE FUNCTION

struct canvas draw_line(struct canvas surface, struct point p1, struct point p2){        // create a function to draw line to canvas
	int dx = p2.x - p1.x;                                                      // define distance between first and last x coordinate
	int dy = p2.y - p1.y;                                                      // define distance between first and last y coordinate
	for(int x = p1.x; x < p2.x; x++){                                          // iterate through x values from p1 to p2
		int y = p1.y + dy * (x - p1.x) / dx;                                   // use the distance to find the next corrisponding y value for x
		surface = draw_canvas(surface, '#', x, y);                             // draw the point
	}
	for(int y = p1.y; y < p2.y; y++){                                          // iterate through y values from p1 to p2 (to fill in the gaps)
		int x = p1.x + dx * (y - p1.y) / dy;                                   // use the distance to find the next corrisponding x value for y
		surface = draw_canvas(surface, '#', x, y);                             // draw the point
	}
	return surface;                                                            // return modified canvas
}
