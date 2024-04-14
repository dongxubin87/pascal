#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "screen.h"
#include "pascal.h"
int main(void){
	int rows;
	printf("Pascal Triangle\n");
	printf("enter the number of rows: ");
	scanf("%d", &rows);
	setFGcolor(CYAN);
	clearScreen();
	pascal_triangle(rows);






}
