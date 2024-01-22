#include <stdio.h>
#include "lib/canvas.c"

int main(){
	char canvas = canvas_make();
	while(1){
		canvas_clear(canvas);
		system("sleep 1");
	}
}
