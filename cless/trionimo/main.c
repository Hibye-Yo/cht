#include "trionimo.h"

void main(void) {
	double a;
	double b;
	double c;

	while (scanf("%lf%lf%lf", &a, &b, &c) == 3) {
		trionimo(a, b, c);
	}

	exit(0);
}
