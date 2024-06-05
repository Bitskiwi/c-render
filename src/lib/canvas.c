// INCLUDES

#include "canvas.h"

// CANVAS CONSTRUCTOR

struct canvas new_canvas(int w, int h){                                        // make canvas which takes width and height and returns canvas instance
	struct canvas instance;                                                    // create an instance of canvas
	instance.w = w;                                                            // initialize width
	instance.h = h;                                                            // initialize height
	return instance;                                                           // return the new canvas
};

// CANVAS RESET

struct canvas reset_canvas(struct canvas surface, char fill_char){             // function to fill canvas with specified chars
	for(int y = 0; y < surface.h; y++){                                        // iterate through rows stopping at set height
		for(int x = 0; x < surface.w; x++){                                    // iterate through coloumns stopping at set width
			surface.matrix[y][x] = fill_char;                                  // matrix position (x,y) is now specified char
		}
	}
	return surface;                                                            // return modified canvas
}

// CANVAS RENDER

void render_canvas(struct canvas surface){                                     // make a function to draw the canvas to the terminal
	for(int y = 0; y < surface.h; y++){                                        // iterate through rows until y == h
		for(int x = 0; x < surface.w; x++){                                    // iterate through coloumns until x == w
			printf("%c", surface.matrix[y][x]);                                // print the character at (x,y) to terminal
		}
		printf("\n");                                                          // CRLF/newline
	}
}

// CANVAS PLOT

struct canvas plot(struct canvas surface, char point, int x, int y){           // make a function to write a character to canvas
	surface.matrix[y][x] = point;                                              // in surface matrix set the position (x,y) to subject
	return surface;                                                            // return modified canvas
}
