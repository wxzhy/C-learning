#include<stdio.h>
int main() {
	int m,n;
	scanf("%d %d",&n,&m);
	int a[n],b[n];
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(int i=0; i<n-m; i++)
		b[i+m]=a[i];
	for(int i=0; i<m; i++)
		b[m-1-i]=a[n-1-i];
	for(int i=0; i<n; i++) {
		int t = b[i];
		printf("%d ", t);
	}
	return 0;
}