///////////////////
// INCLUDES
///////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////
// TERMINAL INFO
///////////////////

int row(){
	return system("tput lines");
}

int col(){
	return system("tput cols");
}

///////////////////
// CANVAS DECLARATION
///////////////////

int canvas_row;
int canvas_col;

char* canvas; // NOTE: need to make this dynamic so canvas_reset can adapt to resized terminal

void canvas_init(){
	canvas_row = row();
	canvas_col = col();

	canvas = (char*)malloc((canvas_row * canvas_col) * sizeof(int));
}

void canvas_reset(){
	for(int y; y < canvas_row; y++){
		for(int x; x < canvas_col; x++){
			canvas[y][x] = '0';
		}
	}
}

void canvas_render(){
	for(int y; y < canvas_row; y++){
		for(int x; x < canvas_col; x++){
			printf("%c", canvas[y][x]);
		}
		printf("\n");
	}
}
