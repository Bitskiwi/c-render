#include <stdio.h>
#include "lib/canvas.c"

int main(){
	char canvas = canvas_make();
	while(1){
		canvas_reset(canvas);
		canvas_render(canvas);
		printf("%c", canvas[10][10]);
		char input;
		scanf("%c", &input);
		if(input == 'q'){
			break;
		}
	}
}
