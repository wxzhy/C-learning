#include<stdio.h>
int main() {
	int k, n;
	float p,s=0;
	scanf("%d %d %f", &k, &n, &p);
	for (int i = 0; i < n; i++) {
		s += k;
		s *= (1.0 + p);
	}
	s-=k*n;
	printf("%.2f", s);
	return 0;
}