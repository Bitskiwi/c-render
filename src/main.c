#include <stdio.h>
#include "lib/canvas.c"

int main(){
	canvas_init();
	while(1){
		canvas_clear();
		system("sleep 1");
	}
}
