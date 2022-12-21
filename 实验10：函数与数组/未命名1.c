#include <stdio.h>
void sort(int arr[], int len);
int main() {
	int a[1000], n, b[1000], m, x[1000], y[2000], z[1000], l1 = 0, l2 = 0, l3 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for (int j = 0; j < m; j++)
		scanf("%d", &b[j]);
	for (int i = 0; i < m; i++)
		y[i] = b[i];
	l2 = m;
	int flag = 0;
	for (int i = 0; i < n; i++) {
		flag = 0;
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				flag = 1;
				break;
			}
		}
		if (!flag) {
			y[l2++] = a[i];
			z[l3++] = a[i];
		} else {
			x[l1++] = a[i];
		}
	}
	sort(x, l1);
	sort(y, l2);
	sort(z, l3);
	for (int i = 0; i < l1; i++)
		printf("%d ", x[i]);
	if (l2 != 0) {
		putchar('\n');
	}

	for (int j = 0; j < l2; j++)
		printf("%d ", y[j]);
	if (l3 != 0) {
		putchar('\n');
	}
	if (l3 != 0) {
		for (int k = 0; k < l3; k++)
			printf("%d ", z[k]);
	}
	return 0;
}

void sort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - 1; j++)
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
}