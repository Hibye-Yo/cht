#include "trionimo.h"
#include <math.h>

static double diakrinousa(double, double, double);

void trionimo(double a, double b, double c) {
	double d;
	double r1;
	double r2;

	d = diakrinousa(a, b, c);

	if (d < 0) {
		fprintf(stderr, "%lf %lf %lf: no solution\n", a, b, c);
		return;
	}

	d = sqrt(d);
	r1 = (-b + d) / (2 * a);
	r2 = (-b - d) / (2 * a);

	if (validation(a, b, c, r1, r2)) {
		fprintf(stderr, "%lf %lf %lf: unstable\n", a, b, c);
		return;
	}
		
	printf("%f %f %f %f %f\n", a, b, c, r1, r2);
}

static double diakrinousa(double a, double b, double c) {
	return (b * b) - (4 * a * c);
}
