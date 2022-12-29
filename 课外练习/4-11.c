#include<stdio.h>
int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i=1; i<=n; i++)
		putchar('*');
	putchar('\n');
	for(int i=2; i<m; i++) {
		putchar('*');
		for(int j=2; j<n; j++)
			putchar(' ');
		putchar('*');
		putchar('\n');
	}
	for(int i=1; i<=n; i++)
		putchar('*');
	return 0;
}