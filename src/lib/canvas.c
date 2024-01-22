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

char canvas_make(){
	char matrix[row()][col()];
	return matrix;
}

void canvas_reset(char canvas){
	for(int y; y < row(); y++){
		for(int x; x < col(); x++){
			canvas[y][x] = '0';
		}
	}
}

void canvas_render(char canvas){
	for(int y; y < row(); y++){
		for(int x; x < col(); x++){
			printf("%c", canvas[y][x]);
		}
		printf("\n");
	}
}
