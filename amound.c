/*
 ============================================================================
 Name        : amound.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int amount, n500, n100, n50, n20, n10, c5, c2, c1;
	printf("Input amount: ");
	scanf("%d", &amount);
	n500 = amount / 500;
	amount = amount % 500;
	n100 = amount / 100;
	amount = amount % 100;
	n50 = amount / 50;
	amount = amount % 50;
	n20 = amount / 20;
	amount = amount % 20;
	n10 = amount / 10;
	amount = amount % 10;
	c5 = amount / 5;
	amount = amount % 5;
	c2 = amount / 2;
	amount = amount % 2;
	c1 = amount;
	printf("Total number of notes:\n");
	printf("500:%d\n", n500);
	printf("100:%d\n", n100);
	printf("50:%d\n", n50);
	printf("20:%d\n", n20);
	printf("10:%d\n", n10);
	printf("5:%d\n", c5);
	printf("2:%d\n", c2);
	printf("1:%d\n", c1);
	return EXIT_SUCCESS;
}
