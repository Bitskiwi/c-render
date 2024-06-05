// INCLUDE

#include <stdio.h>

// CANVAS STRUCTURE

struct canvas {                                                                // create a structure for canvas
	char matrix[100][100];                                                     // define a member for canvas contents with 100x100 for extra space
	int w;                                                                     // define a member for width
	int h;                                                                     // define a member for height
};

// CANVAS RESET

struct canvas reset_canvas(struct canvas surface, char fill_char);

// CANVAS RENDER

void render_canvas(struct canvas surface);

// CANVAS PLOT

struct canvas plot(struct canvas surface, char point, int x, int y);
