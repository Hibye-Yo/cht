#include "trionimo.h"
#include <math.h>

#define MAXVAL 0.0000000001

static double calc_trionimo(double, double, double, double);

int validation(double a, double b, double c, double r1, double r2) {
	if (fabs(calc_trionimo(a, b, c, r1)) > MAXVAL)
	return 1;

	if (fabs(calc_trionimo(a, b, c, r2)) > MAXVAL)
	return 1;

	return 0;
}

static double calc_trionimo(double a, double b, double c, double x) {
	return (a * x * x) + (b * x) + c;
}
