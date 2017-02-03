#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
int get_num(int n) {
    int i = 2;
	int c = 0;
	printf("%d = ", n);

	while (n > 1) {
		if (n % i == 0) {
			n /= i;
			printf("%d * ", i);
			i = 2;
			c++;
		}
		else {

			i++;
		}
	}
	printf("\b\b \n");
	return c;
}

int split_num(int n) {
	int i = 2;
	int c = 0;
	while (n > 1) {
		if (n % i == 0) {
			n /= i;
			i = 2;
			c++;
		}
		else {

			i++;
		}
	}

	return c;
}



main() {
	srand(time(NULL));
	int i = 0;
	int n = 1;
	while (i < 100) {
		if (split_num(n) == 8) {
			get_num(n);
			i++;
		}
		n++;
	}

	getchar();
}
ricxvis martiv mamravlebad dalsha sadac martivi mamaravlebis maqsimaluri raodenoba aris 8!
