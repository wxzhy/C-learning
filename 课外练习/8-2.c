#include <stdio.h>
#include <math.h>
void a1(int a, int b, int c, double delta);
void a2(int a, int b, int c, double delta);
void a3(int a, int b, int c, double delta);
int main() {
	int a, b, c;
	double delta;
	scanf("%d %d %d", &a, &b, &c);
	delta = b * b - 4.0 * a * c;
	if (delta > 0)
		a1(a, b, c, delta);
	else if (delta == 0)
		a2(a, b, c, delta);
	else if (delta < 0)
		a3(a, b, c, delta);
	return 0;
}

void a1(int a, int b, int c, double delta) {
	double s,t,x,y;
	s=(-b)/(2.0*a);
	t=sqrtl(delta)/(2.0*a);
	x=s+t;
	y=s-t;
	printf("x1=%.3lf x2=%.3lf",x,y);
}
void a2(int a, int b, int c, double delta) {
	double s,x;
	s=(-b)/(2.0*a);
	printf("x1=x2=%.3lf",s);
}
void a3(int a, int b, int c, double delta) {
	double s,t,x,y;
	s=(-b)/(2.0*a);
	t=sqrtl(-delta)/(2.0*a);
	printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi",s,t,s,t);
}