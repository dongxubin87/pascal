#include<stdio.h>
#include "screen.h"
void pascal_triangle(int rows) {
	int i, k;
	for (i = 0; i <= rows; i++) {
		gotoXY(i + 1, 40 - i * 2);
		setFGcolor(RED + i);
		for (k = 0; k <= i; k++) {
			printf("%4d", binomial(i, k));
		}
		printf("\n");
	}
}
int binomial(int n, int k) {
	return factorial(n) / factorial(k) / factorial(n - k);

}
int factorial(int m) {
	if (m == 0) return 1;
	return m * factorial(m - 1);
}