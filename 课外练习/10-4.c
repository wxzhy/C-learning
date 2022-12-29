#include<stdio.h>
int n,m,a[100];
void change();
int main() {
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	change();
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
void change() {
	int b[m];
	int j=0;
	for(int i=n-m; i<n; i++,j++)
		b[j]=a[i];
	for(int i=n-m-1; i>=0; i--)
		a[i+m]=a[i];
	for(int i=0; i<m; i++)
		a[i]=b[i];
}