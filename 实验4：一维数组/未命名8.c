#include <stdio.h>
int n, t, a[22], b[22], cnt = 0;
void f(int g);
void j();
void output();
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &t);
	f(n - 1);
	printf("%d", cnt);
	return 0;
}
void f(int g) {
	if (g == -1)
		j();
	else {
		for (b[g] = 0; b[g] <=1 ; b[g]++)
			f(g - 1);
	}
}
void j() {
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (b[i])
			sum += a[i];
	if (sum == t)
		output();
}
void output() {
	int sc=0;
	for (int i = 0; i < n; i++)
		sc += b[i];
	if (sc == 0)
		return;
	for (int i = 0; i < n; i++)
		if (b[i])
			printf("%d ", a[i]);
	putchar('\n');
	cnt++;
}