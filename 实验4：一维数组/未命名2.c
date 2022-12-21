#include<stdio.h>
void ascend(int a[], int n);
void descend(int a[], int n);
int main() {
	int a[10], n, p;
	scanf("%d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8]);
	scanf("%d", &n);
	if (a[8] > a[1])
		ascend(a, n);
	else descend(a, n);
	return 0;
}
void descend(int a[], int n) {
	int p;
	for (int i = 0; i < 9; i++) {
		if (n >= a[i]) {
			p = i;
			break;
		}
		p = 9;
	}
	for (int j = 8; j >= p; j--) {
		a[j + 1] = a[j];
	}
	a[p] = n;
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return;
}
void ascend(int a[], int n) {
	int p;
	for (int i = 0; i < 9; i++) {

		if (n <= a[i]) {
			p = i;
			break;
		}
		p = 9;
	}
	for (int j = 8; j >= p; j--) {
		a[j + 1] = a[j];
	}
	a[p] = n;
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return;
}