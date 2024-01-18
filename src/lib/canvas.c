#include <stdio.h>

int row(){
	return system("tput lines");
}

int col(){
	return system("tput cols");
}
