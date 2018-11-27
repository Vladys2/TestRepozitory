#include <stdio.h>

int main() {
	double x, y, z, p;
	scanf("%lf %lf %lf", &x, &y, &z);

	p = (x + y + z) / 3;

	printf("Aritmetický priemer èísel %g %g %g je: %g ", x, y, z, p);

	return 0;

}