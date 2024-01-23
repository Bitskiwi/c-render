///////////////////
// INCLUDES
///////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////
// TERMINAL INFO
///////////////////

int row(){
	return system("tput lines && clear");
}

int col(){
	return system("tput cols && clear");
}

///////////////////
// CANVAS
///////////////////

int canvas_row;
int canvas_col;

///////////////////
// CANVAS METHODS
///////////////////

void canvas_reset(char canvas[canvas_row][canvas_col]){
	for(int y; y < row(); y++){
		for(int x; x < col(); x++){
			canvas[y][x] = '#';
		}
	}
}

void canvas_render(char canvas[canvas_row][canvas_col]){
	system("clear");
//	printf("%c", canvas[0][0]);
	for(int y; y < row(); y++){
		for(int x; x < col(); x++){
			printf(canvas[y][x]);
		}
		printf("\n");
	}
}

char canvas_make(){
	char matrix[row()][col()];
	canvas_row = row();
	canvas_col = col();
	canvas_reset(matrix);
	return matrix;
}
