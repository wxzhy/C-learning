#include <stdio.h>
void A(int n) {
	if (n == 1) {
		putchar('A');
	} else {
		A(n - 1);
		char t='A'+n-1;
		putchar(t);
		A(n - 1);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	A(n);
	return 0;
}
